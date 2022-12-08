using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiniStage : MonoBehaviour
{
    private GameObject baseObject;

    private GrabObject grabObject;

    [SerializeField]
    private GameObject stagePrefab;

    private MiniStage[] miniStagePrefabs;

    public Vector3 GameBoardPosition { get; set; }

    public Quaternion GameBoardRotation { get; set; }
    private Quaternion rot = Quaternion.Euler(330, 125.264f, 35.264f);

    private void Start()
    {
        baseObject = GameObject.Find("MiniBaseObject");
        grabObject = GameObject.FindObjectOfType<GrabObject>().GetComponent<GrabObject>();

        miniStagePrefabs = GameObject.FindObjectsOfType<MiniStage>();
    }

    private void Update()
    {
        if (baseObject == null) return;

        if (Vector3.Distance(transform.position, baseObject.transform.position) <= 0.05f)
        {
            Destroy(baseObject);

            var go = Instantiate(stagePrefab, GameBoardPosition, GameBoardRotation * rot);
            //var go = Instantiate(stagePrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
            go.GetComponent<Stage>().ChangeText();
            go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);

            grabObject.IsGrab = false;
            grabObject.BlockAlign = go.transform;

            foreach (var miniStagePrefab in miniStagePrefabs)
            {
                Destroy(miniStagePrefab.gameObject);
            }
        }
    }
}
