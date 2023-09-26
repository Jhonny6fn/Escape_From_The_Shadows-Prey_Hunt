using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemigo : MonoBehaviour
{
    NavMeshAgent agent;
	public Transform[] waypoints;
	int waypointIndex;
	Vector3 target;
	public bool golpeado;
	public Transform Player, posicionReinicio;
	public float velocidadPatrulla, velocidadSeguir, tiempoEsperaGolpe;
	public Animator anim;
	public float distanciaMinimaAtaque, tiempoEspera;
	public AudioSource Mordisco, Patrulla;
	public GameObject Jugador;
	

	void Start()
    {
        agent = GetComponent<NavMeshAgent>();
		UpdateDestination();
		anim = GetComponent<Animator>();
	}

    void Update()
    {
		float distancia = Vector3.Distance(transform.position, Player.position);

		if (distancia > 5 && !golpeado)
        {
			agent.speed = velocidadPatrulla;
			anim.SetBool("Patrullar", true);
			anim.SetBool("Atacar", false);
			anim.SetBool("Idle", false);
			UpdateDestination();
		}

		if (distancia <= 5 && distancia >= 3 && !golpeado)
        {
			agent.SetDestination(Player.position);
			agent.speed = velocidadSeguir;
			anim.SetBool("Patrullar", true);
			anim.SetBool("Atacar", false);
			anim.SetBool("Idle", false);
		}

		if (distancia < 3 && !golpeado)
        {
			agent.speed = 0;
			anim.SetBool("Patrullar", false);
			anim.SetBool("Atacar", true);
			anim.SetBool("Idle", false);
			StartCoroutine(cambiarPosPlayer());
		}

		if (golpeado)
		{
			agent.speed = 0; // Detener el enemigo
			anim.SetBool("Patrullar", false);
			anim.SetBool("Atacar", false);
			anim.SetBool("Idle", true);
		}
	}
	
	void UpdateDestination()
	{
		target = waypoints[waypointIndex].position;
		agent.SetDestination(target);

		if (Mathf.Abs(Vector3.Distance(transform.position, target)) < 1f)
        {
			waypointIndex++;
			if (waypointIndex >= 9)
            {
				waypointIndex = 0;
            }
		}
	}

	private IEnumerator ReiniciarMovimientoDespuesDeGolpe()
	{
		yield return new WaitForSeconds(tiempoEsperaGolpe);
		golpeado = false; 
		agent.speed = velocidadPatrulla; 
		anim.SetBool("Patrullar", true);
		anim.SetBool("Atacar", false);
		anim.SetBool("Idle", false);
		//UpdateDestination(); 
	}

	private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Projectile" && !golpeado)
        {
			golpeado = true;
			StartCoroutine(ReiniciarMovimientoDespuesDeGolpe());
			Destroy(collision.gameObject);
        }
    }

	public IEnumerator cambiarPosPlayer()
    {
		yield return new WaitForSeconds(1);
		Player.position = posicionReinicio.position;
		anim.SetBool("Patrullar", true);
		anim.SetBool("Atacar", false);
	}

	public void sonidoPatrulla()
    {
		Patrulla.Play();
    }

	public void sonido_Atacar()
    {
		Mordisco.Play();
	}
}