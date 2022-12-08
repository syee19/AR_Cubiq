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

    private void Start()
    {
        for (int i = 0; i < 13; i++)
        {
            list.Add(i);
        }

        foreach (var blockPrefab in blockPrefabs)
        {
            int ran = Random.Range(0, list.Count);

            var go = Instantiate(blockPrefab, spawnPoints[list[ran]].position, Quaternion.identity);
            go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);

            go.transform.rotation = Quaternion.LookRotation(gameObject.transform.forward, gameObject.transform.up);

            list.RemoveAt(ran);
        }

        var challenge = Instantiate(challengePrefabs, gameObject.transform.position, gameObject.transform.rotation);
        challenge.GetComponent<SpriteRenderer>().sprite = challengeImage;
    }

    public void ChangeText()
    {
        uiText = GameObject.Find("Canvas").transform.GetChild(1).GetComponent<TextMeshProUGUI>();
        if (uiText == null)
        {
            Instantiate(blockPrefabs[0]);
        }
        else uiText.text = "블럭을 쥔 채로 스와이프하여\n블럭을 회전할 수 있어요.\n그림과 같이 만들어보세요.";
    }
}

