using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchController : MonoBehaviour {

	private PlayerMovement moviPlayer;
    private Vector2 v;
    public GameObject mobileControls;

    // Use this for initialization
    void Start () {
		moviPlayer = FindObjectOfType<PlayerMovement>();

        #if UNITY_STANDALONE_OSX || UNITY_STANDALONE_WIN || UNITY_STANDALONE_LINUX
        
        mobileControls.SetActive(false);

        #endif
    }

    // Update is called once per frame
    void Update () 
	{
        #if UNITY_IOS || UNITY_ANDROID

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