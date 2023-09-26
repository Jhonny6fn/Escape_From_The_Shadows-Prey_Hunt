using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerEnemigo : MonoBehaviour
{
    public static bool DentroCampoVision;

    void Start()
    {
        DentroCampoVision = false;
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            DentroCampoVision = true;
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            DentroCampoVision = false;
        }
    }
}