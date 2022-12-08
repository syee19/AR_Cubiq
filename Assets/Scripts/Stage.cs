using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Stage : MonoBehaviour
{
    [SerializeField]
    private Transform[] spawnPoints;

    [SerializeField]
    private GameObject[] blockPrefabs;

    [SerializeField]
    private GameObject challengePrefabs;
    [SerializeField]
    private Sprite challengeImage;

    private TextMeshProUGUI uiText;

    private List<int> list = new List<int>();

    private GrabObject grabObject;

    private void Start()
    {
        uiText = GameObject.Find("Text").GetComponent<TextMeshProUGUI>();

        grabObject = GameObject.FindObjectOfType<GrabObject>().GetComponent<GrabObject>();

        for (int i = 0; i < 13; i++)
        {
            list.Add(i);
        }

        foreach (var blockPrefab in blockPrefabs)
        {
            int ran = Random.Range(0, list.Count);

            var go = Instantiate(blockPrefab, spawnPoints[list[ran]].position, Quaternion.identity);
            go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);

            Vector3 alignedForward = grabObject.NearestWorldAxis(go.transform.forward);
            Vector3 alignedUp = grabObject.NearestWorldAxis(go.transform.up);
            go.transform.rotation = Quaternion.LookRotation(alignedForward, alignedUp);

            list.RemoveAt(ran);
        }

        var challenge = Instantiate(challengePrefabs, gameObject.transform.position, gameObject.transform.rotation);
        challenge.GetComponent<SpriteRenderer>().sprite = challengeImage;

        uiText.text = "블럭을 회전하고 이동하여\n그림과 같이 만드세요.";
    }
}

