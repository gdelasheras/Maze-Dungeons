using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour 
{
	[SerializeField]
	private BoardManager boardScript;

    private int level;

	// Use this for initialization
	void Awake () 
	{
		level = (level == 0) ? 1 : level;
		boardScript = GetComponent<BoardManager>();
        InitGame();
	}

    void InitGame()
    {
		Debug.Log ("level: " + level);
        boardScript.SetUpScene(level);
    }

	// Update is called once per frame
	void Update () { }
}
