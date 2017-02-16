using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleController : MonoBehaviour 
{
	PlayerBattle player;

	GameObject enemy;

	// Use this for initialization
	void Start () 
	{
		player = FindObjectOfType<PlayerBattle>();
	}
	
	// Update is called once per frame
	void Update () 
	{
		
	}

	public void PlayerDoAttack()
	{
		player.attack (enemy);
	}
}
