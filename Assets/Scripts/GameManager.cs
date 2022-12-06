using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private Transform[] spawnPoints;

    [SerializeField]
    private GameObject[] blocks;

    private List<int> list = new List<int>();

    private void Awake()
    {
        for (int i = 0; i < 13; i++)
        {
            list.Add(i);
        }

        foreach (var block in blocks)
        {
            int ran = Random.Range(0, list.Count);

            Instantiate(block, spawnPoints[ran].position, Quaternion.identity);

            list.RemoveAt(ran);
        }
    }
}
