using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class ScoreController : MonoBehaviour
{
	public string insertScore = ""; 
	public string getScores = "http://maze-dungeons.esy.es/get_scores.php";

	public Text titulo;
	public Text puntuaciones;
	public Button btnEmpezar;
	public Button btnScores;
	public Button btnVolver;
	public string result = "";

	void Start()
	{
		StartCoroutine(GetScores());
	}

	// Get the scores from the MySQL DB to display in a GUIText.
	// remember to use StartCoroutine when calling this function!
	IEnumerator GetScores()
	{
		WWW hs_get = new WWW(getScores);
		yield return hs_get;

		if (hs_get.error != null)
		{
			print("There was an error getting the high score: " + hs_get.error);
		}
		else
		{
			JSONObject j = new JSONObject(hs_get.text);
			this.result = accessData(j);
		}
	}

	string accessData(JSONObject obj)
	{
		string result = "";

		switch(obj.type)
		{
		case JSONObject.Type.OBJECT:
			for(int i = 0; i < obj.list.Count; i++)
			{
				string key = (string)obj.keys[i];
				JSONObject j = (JSONObject)obj.list[i];
				result += accessData(j);
			}
			break;
		case JSONObject.Type.ARRAY:
			foreach(JSONObject j in obj.list)
			{
				result += accessData(j) + "\n";
			}

			break;
		case JSONObject.Type.STRING:
			//Debug.Log(obj.str);
			result = obj.str.ToString()  + "\t";
			break;
		case JSONObject.Type.NUMBER:
			//Debug.Log(obj.n);
			result = obj.n.ToString()  + "\t";
			break;
		case JSONObject.Type.BOOL:
			//Debug.Log(obj.b);
			result = obj.b.ToString() + "\t";
			break;
		case JSONObject.Type.NULL:
			//Debug.Log("NULL");
			break;
		}

		return result;
	}

	public void mostrarScores()
	{
		btnEmpezar.gameObject.SetActive (false);
		btnScores.gameObject.SetActive (false);
		titulo.gameObject.SetActive (false);
		puntuaciones.text = this.result;
		puntuaciones.gameObject.SetActive (true);
		btnVolver.gameObject.SetActive (true);
	}

	public void ocultar()
	{
		btnEmpezar.gameObject.SetActive (true);
		btnScores.gameObject.SetActive (true);
		titulo.gameObject.SetActive (true);
		puntuaciones.text = this.result;
		puntuaciones.gameObject.SetActive (false);
		btnVolver.gameObject.SetActive (false);
    }
}
