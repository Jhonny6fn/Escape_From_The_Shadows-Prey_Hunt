using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PalancaPuerta : MonoBehaviour
{
    [SerializeField] private GameObject _palanca, _pared, _textoEvento, _textoSalirEvento;
    [SerializeField] private Transform _posFinal;
    [SerializeField] private bool _activarPalanca;
    [SerializeField] private float _speed;
    [SerializeField] private AudioSource _sonidoAbrir;

    void Start()
    {
        _activarPalanca = false;
    }

    void Update()
    {
        if (_palanca.transform.eulerAngles.x <= 2f && !_activarPalanca)
        {
            _activarPalanca = true;
        }

        if (_activarPalanca)
        {
            _pared.transform.position = Vector3.MoveTowards(_pared.transform.position, _posFinal.position, _speed * Time.deltaTime);
            _textoEvento.SetActive(false);
            _textoSalirEvento.SetActive(true);
            _sonidoAbrir.enabled = true;
        }
    }
}