using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using UnityEngine.UI;

public class BoardManager : MonoBehaviour {

    // Serializable attributes
    [SerializeField]
    private GameObject exit;
    [SerializeField]
    private GameObject[] floorTiles;
    [SerializeField]
    private GameObject[] outerWallsTiles;
	//[SerializeField]
	//private Text TextoPuntos;
    


    // No serializable attributes
	private double columns;
	private double rows;
    private List<List<Box>> mazeMap = new List<List<Box>>();
	private List<Box> beepers = new List<Box>();
    private List<Box> walls = new List<Box>();
	private Transform boardHolder;
	private int remainingBeepers;

    public class Box
	{
		public bool isWall;
		public bool isPath;
		public bool isRightPath;
		public bool isEnd;
		public bool isBegin;
		public string tag;
		public double x;
		public double y;
        
		public Box(){ }
	}

    // Replace tags
	private void ReplaceTags(string toBeReplaced, string toReplace)
	{
		for (int i = 0; i < mazeMap.Count; i++)
		{
			for(int j = 0; j < mazeMap[i].Count; j++)
			{
				if(!mazeMap[i][j].tag.Equals(toReplace) && mazeMap[i][j].tag.Equals(toBeReplaced))
				{
					mazeMap[i][j].tag = toReplace;
				}
			}
		}
	}

	private void PrepareMazeMap()
	{
		int tag = 0;

		for (int i = 0; i < rows; i++) {
			mazeMap.Add(new List<Box> ());
		}

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				mazeMap[i].Add(new Box ());
			}
		}

		double x = -0.64;
		double y = -0.64;

		for (int i = 0; i < mazeMap.Count; i++)
		{
			for(int j = 0; j < mazeMap[i].Count; j++)
			{
				if (i == 0 || j == 0 || i == mazeMap.Count - 1 || j == mazeMap[i].Count -1)
				{
					// Delimiter walls
					mazeMap[i][j].isWall = true;
					mazeMap[i][j].isPath = false;
					mazeMap[i][j].isRightPath = false;
					mazeMap[i][j].tag = "-1";
					mazeMap[i][j].x = j;
					mazeMap[i][j].y = i;
				}
				else if (i % 2 != 0 && j % 2 != 0)
				{
					// Path
					mazeMap[i][j].isWall = false;
					mazeMap[i][j].isPath = true;
					mazeMap[i][j].isRightPath = false;
					mazeMap[i][j].tag = tag.ToString();
					mazeMap[i][j].x = x;
					mazeMap[i][j].y = y;
					beepers.Add(mazeMap[i][j]);
				}
				else
				{
					// Walls
					mazeMap[i][j].isWall = true;
					mazeMap[i][j].isPath = false;
					mazeMap[i][j].isRightPath = false;
					mazeMap[i][j].tag = "-1";
					mazeMap[i][j].x = j;
					mazeMap[i][j].y = i;
					walls.Add(mazeMap[i][j]);
				}
				tag++;
			 	y += 0.64;
			}
				y = -0.64;
				x += 0.64;
		}
	}

	private void GeneratePaths()
	{
		int direction = 2;

		while (walls.Count != 0)
		{
			int position;

			if (walls.Count == 1)
			{
				position = 0;
			}
			else
			{
				//srand(time(0));
				position = Random.Range(0, walls.Count - 1);
			}

			//srand(time(0));

			// Care with the coordinates and the array postion.
			int yWallPos = (int) System.Math.Round(walls[position].y, 2);
			int xWallPos = (int) System.Math.Round(walls[position].x, 2);

			// We alternate between horinzontal and vertical paths
			if(direction % 2 == 0)
			{
				// Horinzontal
				if (!mazeMap[yWallPos][xWallPos - 1].tag.Equals(mazeMap[yWallPos][xWallPos + 1].tag)
					&& !mazeMap[yWallPos][xWallPos - 1].tag.Equals("-1")
					&& !mazeMap[yWallPos][xWallPos + 1].tag.Equals("-1"))
				{
					// Join Paths
					ReplaceTags(mazeMap[yWallPos][xWallPos-1].tag, mazeMap[yWallPos][xWallPos + 1].tag);
					mazeMap[yWallPos][xWallPos].isWall = false;
					mazeMap[yWallPos][xWallPos].isPath = true;
					mazeMap[yWallPos][xWallPos].tag = mazeMap[yWallPos][xWallPos + 1].tag;
				}
				else
				{
					// Vertical
					if (!mazeMap[yWallPos - 1][xWallPos].tag.Equals(mazeMap[yWallPos + 1][xWallPos].tag)
						&& !mazeMap[yWallPos - 1][xWallPos].tag.Equals("-1")
						&& !mazeMap[yWallPos + 1][xWallPos].tag.Equals("-1"))
					{
						// Join Paths
						ReplaceTags(mazeMap[yWallPos - 1][xWallPos].tag, mazeMap[yWallPos + 1][xWallPos].tag);
						mazeMap[yWallPos][xWallPos].isWall = false;
						mazeMap[yWallPos][xWallPos].isPath = true;
						mazeMap[yWallPos][xWallPos].tag = mazeMap[yWallPos + 1 ][xWallPos].tag;
					}
				}
				direction = 1;
			}
			else{
				// Vertical
				if (!mazeMap[yWallPos - 1][xWallPos].tag.Equals(mazeMap[yWallPos + 1][xWallPos].tag)
					&& !mazeMap[yWallPos - 1][xWallPos].tag.Equals("-1")
					&& !mazeMap[yWallPos + 1][xWallPos].tag.Equals("-1"))
				{
					// Join Paths
					ReplaceTags(mazeMap[yWallPos - 1][xWallPos].tag, mazeMap[yWallPos + 1][xWallPos].tag);
					mazeMap[yWallPos][xWallPos].isWall = false;
					mazeMap[yWallPos][xWallPos].isPath = true;
					mazeMap[yWallPos][xWallPos].tag = mazeMap[yWallPos + 1 ][xWallPos].tag;
				}
				else
				{
					// Horinzontal
					if (!mazeMap[yWallPos][xWallPos - 1].tag.Equals(mazeMap[yWallPos][xWallPos + 1].tag)
						&& !mazeMap[yWallPos][xWallPos - 1].tag.Equals("-1")
						&& !mazeMap[yWallPos][xWallPos + 1].tag.Equals("-1"))
					{
						// Join Paths
						ReplaceTags(mazeMap[yWallPos][xWallPos-1].tag, mazeMap[yWallPos][xWallPos + 1].tag);
						mazeMap[yWallPos][xWallPos].isWall = false;
						mazeMap[yWallPos][xWallPos].isPath = true;
						mazeMap[yWallPos][xWallPos].tag = mazeMap[yWallPos][xWallPos + 1].tag;
					}
				}
				direction = 2;
			}
			walls.RemoveAt(position);
		}
	}

	private void PrintMaze()
	{
		GameObject instance = null;

		double x = -0.64;
		double y = -0.64;

		boardHolder = new GameObject("Board").transform;

		for (int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				GameObject toInstantiate = floorTiles[Random.Range(0, floorTiles.Length)];
				x = System.Math.Round(x, 2);
				y = System.Math.Round(y, 2);
                
				if (mazeMap[i][j].isWall)
				{
					toInstantiate = outerWallsTiles[Random.Range(0, outerWallsTiles.Length)];

					instance = Instantiate(toInstantiate, new Vector3((float) (x), (float) (y), 0f), Quaternion.identity) as GameObject;
					instance.transform.SetParent(boardHolder);
				}
				else if (mazeMap[i][j].isRightPath)
				{
					// Floor
					instance = Instantiate(toInstantiate, new Vector3((float) x, (float) y, 0f), Quaternion.identity) as GameObject;
					instance.transform.SetParent(boardHolder);
				}
				else
				{
					// Floor
					instance = Instantiate(toInstantiate, new Vector3((float) x, (float) y, 0f), Quaternion.identity) as GameObject;
					instance.transform.SetParent(boardHolder);
				}
				y += 0.64;
			}
			y = -0.64;
			x += 0.64;
		}
	}

    public void SetUpScene(int level)
    {
		remainingBeepers = level;
		//TextoPuntos.text = "Quedan " + remainingBeepers + " pulsadores por recoger";
        this.columns = level * 5;
        this.rows = level * 5;
        PrepareMazeMap ();
		GeneratePaths ();
		PlaceBeepers (level);
		PrintMaze ();
    }

	private void PlaceBeepers(int level)
	{
		GameObject beeper;
		for (int i = 0; i < level; i++)
		{
			Box box =  beepers[Random.Range (0, beepers.Count - 1)];
			beeper = Instantiate (exit, new Vector3((float) box.x - 0.16f, (float) box.y - 0.16f, 0f), Quaternion.identity) as GameObject;
		
		}
	}

}
