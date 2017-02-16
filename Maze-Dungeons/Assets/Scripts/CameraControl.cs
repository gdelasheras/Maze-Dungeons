using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraControl : MonoBehaviour {

    public Transform target;
    public float moveSpeed;
    Camera myCam;

	// Use this for initialization
	void Start () {
        myCam = GetComponent<Camera>();
	}
	
	// Update is called once per frame
	void Update () {
        if (target)
        {
            transform.position = Vector3.Lerp(transform.position, target.position, 5.0f) + new Vector3(0, 0, -10);        
        }
	}
}
