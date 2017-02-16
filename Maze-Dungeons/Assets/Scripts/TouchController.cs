using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchController : MonoBehaviour {

	private PlayerMovement moviPlayer;
    private Vector2 v;

    // Use this for initialization
    void Start () {
		moviPlayer = FindObjectOfType<PlayerMovement>();
	}
	
	// Update is called once per frame
	void Update () 
	{
		#if UNITY_IOS

    	moviPlayer.Move(v);

		#endif
    }

	// Left button
    public void LeftArrow()
    {       
        v = new Vector2(-1, 0);
    }

	// Right button
    public void RightArrow()
    {
        v = new Vector2(1, 0);
    }

	// Up button
    public void UpArrow()
    {
        v = new Vector2(0, 1);
    }

	// Down button
    public void DownArrow()
    {
        v = new Vector2(0, -1);
    }

	// Button release
    public void Unpress()
    {
		v = Vector2.zero;
    }
}