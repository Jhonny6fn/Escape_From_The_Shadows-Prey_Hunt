using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColisionadorProyectil : MonoBehaviour
{
    [SerializeField] private GameObject _particulas;

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "Projectile")
        {
            DisparosPuzzle._disparos += 1;
            Instantiate(_particulas, transform.position, Quaternion.identity);
            Destroy(collision.gameObject);
            Destroy(this.gameObject);
        }
    }
}