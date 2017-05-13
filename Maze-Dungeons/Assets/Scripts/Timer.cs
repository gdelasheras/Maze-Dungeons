using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour 
{
	[SerializeField]
	private Text textoCronometro;

	private float tiempoInicio;

	private bool fin;

	// Use this for initialization
	void Start () 
	{
		tiempoInicio = Time.time;
		fin = false;
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (!fin)
		{
			float tiempo = Time.time - tiempoInicio;

			string minutos = ((int) tiempo / 60).ToString();
			string segundos = (tiempo % 60).ToString("f2");

			textoCronometro.text = minutos + ":" + segundos;			
		}
	}

	public string getTime()
	{
		return textoCronometro.text;
	}

    public void stop()
	{
		fin = true;
	}
}
