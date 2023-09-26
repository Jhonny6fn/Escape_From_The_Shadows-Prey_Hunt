using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class luz_linterna : MonoBehaviour
{
    public GameObject luzLinterna;
    private bool linternaEncendida;

    // Función para alternar el estado de la linterna
    public void AlternarLinterna()
    {
        linternaEncendida = !linternaEncendida;
        luzLinterna.SetActive(linternaEncendida);
    }
}
