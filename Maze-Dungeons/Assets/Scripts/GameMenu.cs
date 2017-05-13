using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameMenu : MonoBehaviour
{
    private static GameMenu instance;
    public static bool setPause;
	public string addScoreURL = "http://maze-dungeons.esy.es/post_scores.php?";

    private GameMenu()
    {
        
    }

    public static GameMenu GetInstance()
    {
        if (instance == null)
        {
            instance = new GameMenu();
        }

        return instance;
    }

    public GameObject PausePanel;

    public void Pause()
    {
        PausePanel.SetActive(true);
        setPause = true;
        Time.timeScale = 0;
    }

    public void Continue()
    {
        PausePanel.SetActive(false);
        setPause = false;
        Time.timeScale = 1;
    }

    public void Salir()
    {
        Application.Quit();
    }

    public void Restart()
    {
        SceneManager.LoadScene("Maze");
        Time.timeScale = 1;
        setPause = false;
    }


	// Use this for initialization
	void Start ()
    {
        instance = this;
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (Input.GetKeyUp(KeyCode.Escape) && setPause == false)
        {
            GameMenu.GetInstance().Pause();
        }

        else if (Input.GetKeyUp(KeyCode.Escape) && setPause == true)
        {
            GameMenu.GetInstance().Continue();
        }
    }

	public void guardar()
	{
		StartCoroutine(PostScores("pato", "00:00"));
	}

	public IEnumerator PostScores(string name, string time)
	{
		string date = System.DateTime.Now.ToString("dd-MM-yyyy");

		string post_url = addScoreURL + "time=" + time + "&name=" + name + "&date=" + date;

		// Post the URL to the site and create a download object to get the result.
		WWW hs_post = new WWW(post_url);
		yield return hs_post; // Wait until the download is done

		if (hs_post.error != null)
		{
			print("There was an error posting the high score: " + hs_post.error);
		}
	}
}
