using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerMovement : MonoBehaviour
{
	// Serializable attributes
    [SerializeField]
	private float playerMov;

	// No serializable attributes
	private Animator anim;
	private Rigidbody2D rb;
	private bool walking = false;
	[SerializeField]
	private Text TextoPuntos;
	private int remainingBeepers = 5;

    void Start ()
    {
		anim = GetComponent<Animator>();
		rb = GetComponent<Rigidbody2D> ();
	}

    public void Move(Vector2 v)
    {
		if (v != Vector2.zero)
		{
			anim.SetBool ("isWalking", true);
			anim.SetFloat ("input_x", v.x);
			anim.SetFloat ("input_y", v.y);
		}
		else
		{
			anim.SetBool ("isWalking", false);
		}

        rb.MovePosition(rb.position + v * Time.deltaTime * 4);
    }
	
	void Update () 
	{
		#if UNITY_STANDALONE || UNITY_STANDALONE_OSX

        Vector2 v = new Vector2 (Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));

		Move (v);

		#endif

		//checkAttack ();
    }

    void OnCollisionEnter2D(Collision2D collisionInfo)
    {
		walking = false;
    }


	public void OnTriggerEnter2D(Collider2D collider)
	{
		if (collider.gameObject.tag == "beeper") {
			Debug.Log ("Beeper");
			Destroy (collider.gameObject);
			if (remainingBeepers == 1)
			{
				TextoPuntos.text = "Has ganado!";
			}
			else
			{
				remainingBeepers--;
				TextoPuntos.text = "Quedan " + remainingBeepers + " pulsadores por recoger";
			}
		}

	}

    void OnCollisionStay2D(Collision2D collisionInfo)
    {

    }

    void OnCollisionExit2D(Collision2D collisionInfo)
    {
		
    }

    private void checkAttack()
    {
        if (Input.GetKeyDown("space"))
        {
			setAttackAnimation(true);
        }
        else
        {
			setAttackAnimation(false);
        }
    }

	private void setAttackAnimation(bool isAttacking)
	{
		anim.SetBool("isAttacking", isAttacking);
	}

	public void PerformOneAttack()
	{
		
		Move (new Vector2(5, 0));
		
		//anim.Play ("attacking");
	}

}
