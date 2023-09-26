using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisparosPuzzle : MonoBehaviour
{
    public static int _disparos;
    [SerializeField] private GameObject luzFinal, _piedras;

    void Start()
    {
        _disparos = 0;
    }

    void Update()
    {
        if (_disparos >= 5)
        {
            luzFinal.SetActive(true);
            Destroy(_piedras.gameObject);
        }
    }
}