using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage : MonoBehaviour
{
    private GameObject baseObject;

    [SerializeField]
    private GameObject stagePrefab;

    private Stage[] miniStagePrefabs;

    public GameObject GameBoardArea { get; set; }

    private void Start()
    {
        baseObject = GameObject.Find("MiniBaseObject");

        miniStagePrefabs = GameObject.FindObjectsOfType<Stage>();
    }

    private void Update()
    {
        if (baseObject == null) return;

        if (Vector3.Distance(transform.position, baseObject.transform.position) <= 0.05f)
        {
            Destroy(baseObject);

            //var go = Instantiate(stagePrefab, GameBoardArea.transform.position, GameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
            var go = Instantiate(stagePrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
            go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);

            foreach (var miniStagePrefab in miniStagePrefabs)
            {
                Destroy(miniStagePrefab.gameObject);
            }
        }
    }
}
