using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerMovement : MonoBehaviour
{
	// Serializable attributes
    [SerializeField]
	private float playerMov;

    [SerializeField]
    private Timer timer;

    [SerializeField]
    private Text TextoPuntos;

    [SerializeField]
    private BoardManager boardmanager;

    [SerializeField]
    private GameMenu menu;

    // No serializable attributes
    private Animator anim;
	private Rigidbody2D rb;
	private bool walking = false;
	private int remainingBeepers;

    /// <summary>
    /// Método que se ejecuta cuando se inicia el script.
    /// </summary>
    void Start ()
    {
		anim = GetComponent<Animator>();
		rb = GetComponent<Rigidbody2D> ();
		remainingBeepers = boardmanager.level * 10;
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
    }

    void OnCollisionEnter2D(Collision2D collisionInfo)
    {
		walking = false;
    }

    /// <summary>
    /// Método que detecta el colisionado con otro objeto.
    /// </summary>
    /// <param name="collider">Objeto contra el que se ha colisionado.</param>
	public void OnTriggerEnter2D(Collider2D collider)
	{
		if (collider.gameObject.tag == "beeper")
        {
			if (remainingBeepers == 1)
			{
				TextoPuntos.text = "Has ganado!!";
                timer.stop();
                menu.menuFinPartida(timer.getTime());
			}
			else
			{
				remainingBeepers--;
				TextoPuntos.text = "Objetos por recoger: " + remainingBeepers;
			}
		}
		else if (collider.gameObject.tag == "timeLess")
		{
			timer.minus20 ();
		}
		Destroy (collider.gameObject);
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
