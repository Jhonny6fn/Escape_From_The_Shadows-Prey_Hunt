using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class interactuar_linterna : MonoBehaviour
{
    private bool isInRange = false;
    private bool hasFlashlight = false;
    public GameObject flashlight; 

    void Update()
    {
        if (isInRange && Input.GetButtonDown("Interact"))
        {
            if (hasFlashlight)
            {
                // Si ya tienes la linterna, la sueltas
                flashlight.SetActive(true);
                hasFlashlight = false;
                Debug.Log("Has soltado la linterna");
            }
            else
            {
                // Si no tienes la linterna, la recoges
                flashlight.SetActive(false);
                hasFlashlight = true;
                Debug.Log("Has recogido la linterna");
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            isInRange = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            isInRange = false;
        }
    }
}
