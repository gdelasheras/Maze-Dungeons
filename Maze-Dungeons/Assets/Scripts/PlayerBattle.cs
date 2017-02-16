using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBattle : MonoBehaviour 
{
	// No serializable attributes
	private Animator animator;
	private Rigidbody2D rigidbody;
	public GameObject attackObjetive;
	[SerializeField]
	private Vector3 attackVector;
	public bool isAttacking;
	private float initialPosition_x;
	private float initialPosition_y;
	private float attackPosition_x;
	private float attackPosition_y;
	private bool isMoving;
	private bool isMovingBack;

	void Start ()
	{
		this.animator = GetComponent<Animator>();
		this.rigidbody = GetComponent<Rigidbody2D> ();
		this.initialPosition_x = transform.position.x;
		this.initialPosition_y = transform.position.y;
		this.isMoving = false; 
		this.isMovingBack = false;
		this.isAttacking = false;

		SetPlayerOrientation ("East");
	}

	// Update is called once per frame
	void Update () 
	{
		if (isMoving) 
		{
			attackVector = new Vector3 (attackObjetive.transform.position.x - initialPosition_x, 
				attackObjetive.transform.position.y - initialPosition_y, 0f);
			Move (attackVector);
		}
		else if (isMovingBack)
		{
			if (initialPosition_x == transform.position.x
				&& initialPosition_y == transform.position.y )
			{
				isMovingBack = false;
				SetPlayerOrientation ("East");
				attackVector = Vector3.zero;
			}
			Move (attackVector);
		}
	}

	public void moveBack()
	{
		SetPlayerOrientation ("West");
		isMovingBack = true;
	}

	void OnTriggerEnter2D(Collider2D collisionInfo)
	{
		attackVector = new Vector3 (initialPosition_x, initialPosition_y, 0f);
		isMoving = false;
		StopMovement ();
		StartCoroutine("PerformOneAttack");
	}

	void OnTriggerStay2D(Collider2D collisionInfo)
	{
		
	}

	void OnTriggerExit2D(Collider2D collisionInfo)
	{
		
	}

	public void Move(Vector3 moveVector)
	{
		if (moveVector != Vector3.zero)
		{
			animator.SetBool ("isWalking", true);
			animator.SetFloat ("input_x", moveVector.x);
			animator.SetFloat ("input_y", moveVector.y);
		}
		else
		{
			animator.SetBool ("isWalking", false);
		}

		transform.position = Vector2.MoveTowards(transform.position, moveVector, 3 * Time.deltaTime);

	}

	public void attack(GameObject enemy)
	{
		isMoving = true;
		//attackObjetive = enemy;
	}

	public void StopMovement()
	{
		animator.SetBool ("isWalking", false);
	}
		
	private void setAttackAnimation(bool isAttacking)
	{
		animator.SetBool("isAttacking", isAttacking);
	}

	public IEnumerator PerformOneAttack()
	{
		setAttackAnimation(true);
		animator.Play ("attacking");
		setAttackAnimation(false);
		yield return null;
	}

	public void SetPlayerOrientation(string orientation)
	{
		switch (orientation)
		{
		case "north":
			animator.SetFloat ("input_y", 1);
			break;

		case "South":
			animator.SetFloat ("input_y", -1);
			break;

		case "East":
			animator.SetFloat ("input_x", 1);
			break;

		case "West":
			animator.SetFloat ("input_x", -1);
			break;
		}
	}
}
