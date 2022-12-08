using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage : MonoBehaviour
{
    [SerializeField]
    private Transform[] spawnPoints;

    [SerializeField]
    private GameObject[] blockPrefabs;

    private List<int> list = new List<int>();

    private void Start()
    {
        for (int i = 0; i < 13; i++)
        {
            list.Add(i);
        }

        foreach (var blockPrefab in blockPrefabs)
        {
            int ran = Random.Range(0, list.Count);

            var go = Instantiate(blockPrefab, spawnPoints[ran].position, Quaternion.identity);
            go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);

            list.RemoveAt(ran);
        }
    }
}
