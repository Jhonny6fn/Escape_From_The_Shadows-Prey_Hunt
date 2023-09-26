using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class activar : MonoBehaviour
{
    public GameObject Luz;
    public bool LinternaOn;

    void Update()
    {
        if(LinternaOn == true)
        {
            Luz.SetActive(true);
        }
        else
        {
            Luz.SetActive(false);
        }
    }

    public void activarLuz()
    {
        LinternaOn = true;
    }

    public void apagarLuz()
    {
        LinternaOn = false;
    }
}