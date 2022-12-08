using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using TMPro;

public class PlaceGameBoard : MonoBehaviour
{
    [SerializeField] private GameObject gameBoardArea;      // 시작시 gameBoard가 생성될 영역을 평면상에 보여줌
    [SerializeField] private GameObject baseObject;         // 생성될 gameBoard
    [SerializeField] private GameObject baseObjectMask;     // 바닥에 박혀보이도록 하는 Mask 평면들
    [SerializeField] private TextMeshProUGUI uiText;
    [SerializeField] private GameObject[] stagePrefabs;

    private Vector3[] stagePrefabPos = new[] { new Vector3(0.3f, 0.3f, 0f), new Vector3(0.3f, 0.3f, 0.3f), new Vector3(0f, 0.3f, 0.3f) };

    ARRaycastManager m_RaycastManager;
    List<ARRaycastHit> m_Hits = new List<ARRaycastHit>();
    private Vector2 ScreenCenter;

    // Start is called before the first frame update
    void Start()
    {
        // 화면 중앙 좌표, raycast 방향으로 사용
        ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
        m_RaycastManager = GetComponent<ARRaycastManager>();
        gameBoardArea.SetActive(false);
        uiText.text = "책상 위를 바라보세요.\n곧 다음 단계가 진행됩니다.";
    }

    // Update is called once per frame
    void Update()
    {
        // 화면의 중심점에서 raycast하여 수평 plane hit 지점으로 preGameBoard 이동
        if (m_RaycastManager.Raycast(ScreenCenter, m_Hits, TrackableType.PlaneWithinPolygon))
        {
            if (!gameBoardArea.activeSelf)
            {
                gameBoardArea.SetActive(true);
                uiText.text = "원하는 위치를 조준하고\n화면을 터치하세요.";
            }
            Pose hitPose = m_Hits[0].pose;
            gameBoardArea.transform.SetPositionAndRotation(hitPose.position, hitPose.rotation);
        }

        Debug.Log(gameBoardArea.transform.localScale);

        // touch가 일어난 경우에만 실행
        if (Input.touchCount == 0)
            return;

        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            GameObject newbase = Instantiate(baseObject, gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
            newbase.transform.localScale = new Vector3(.03f, .03f, .03f);
            newbase.name = "MiniBaseObject";
            Instantiate(baseObjectMask, gameBoardArea.transform.position, gameBoardArea.transform.rotation);
            gameObject.GetComponentInChildren<GrabObject>().BlockAlign = baseObject.transform;

            /*for (int i = 0; i < 3; i++)
            {
                var go = Instantiate(stagePrefabs[i], gameBoardArea.transform.position + stagePrefabPos[i], gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
                go.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
            }*/

            var go = Instantiate(stagePrefabs[0], gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
            go.transform.position += Quaternion.Euler(-45, 0, 45) * (gameBoardArea.transform.forward * 0.2f + gameBoardArea.transform.right * 0.2f);
            go.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
            go.GetComponent<MiniStage>().GameBoardPosition = gameBoardArea.transform.position;
            go.GetComponent<MiniStage>().GameBoardRotation = gameBoardArea.transform.rotation;

            go = Instantiate(stagePrefabs[1], gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
            go.transform.position += Quaternion.Euler(-45, 0, 45) * gameBoardArea.transform.forward * 0.3f;
            go.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
            go.GetComponent<MiniStage>().GameBoardPosition = gameBoardArea.transform.position;
            go.GetComponent<MiniStage>().GameBoardRotation = gameBoardArea.transform.rotation;

            go = Instantiate(stagePrefabs[2], gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
            go.transform.position += Quaternion.Euler(-45, 0, 45) * (gameBoardArea.transform.forward * 0.2f - gameBoardArea.transform.right * 0.2f);
            go.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
            go.GetComponent<MiniStage>().GameBoardPosition = gameBoardArea.transform.position;
            go.GetComponent<MiniStage>().GameBoardRotation = gameBoardArea.transform.rotation;

            uiText.text = "터치 상태로 블럭을 옮길 수 있어요.\n블럭을 게임보드 위로 옮겨\n게임을 시작하세요.";
            Destroy(gameBoardArea);
            Destroy(this);
        }

    }
}
