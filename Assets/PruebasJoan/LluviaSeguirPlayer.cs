using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LluviaSeguirPlayer : MonoBehaviour
{
    [SerializeField] private Transform _player;

    void Update()
    {
        transform.position = new Vector3(_player.position.x, _player.position.y + 24, _player.position.z);
    }
}