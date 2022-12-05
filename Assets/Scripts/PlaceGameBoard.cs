using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using TMPro;

public class PlaceGameBoard : MonoBehaviour
{
    [SerializeField] private GameObject gameBoardArea;
    [SerializeField] private GameObject baseObject;
    [SerializeField] private TextMeshProUGUI uiText;

    ARRaycastManager m_RaycastManager;
    List<ARRaycastHit> m_Hits = new List<ARRaycastHit>();
    private Vector2 ScreenCenter;

    // Start is called before the first frame update
    void Start()
    {
        // 화면 중앙 좌표, raycast 방향으로 사용
        ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
        m_RaycastManager = GetComponent<ARRaycastManager>();
    }

    // Update is called once per frame
    void Update()
    {
        // 화면의 중심점에서 raycast하여 수평 plane hit 지점으로 preGameBoard 이동
        if (m_RaycastManager.Raycast(ScreenCenter, m_Hits, TrackableType.PlaneWithinPolygon))
        {
            Pose hitPose = m_Hits[0].pose;
            gameBoardArea.transform.SetPositionAndRotation(hitPose.position, hitPose.rotation);
        }

        // touch가 일어난 경우에만 실행
        if (Input.touchCount == 0)
            return;

        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            Instantiate(baseObject, gameBoardArea.transform.position, gameBoardArea.transform.rotation * Quaternion.Euler(-45, 0, 45));
            baseObject.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
            uiText.text = "터치로 블럭을 고정하고\n게임보드 위로 옮기세요.";
            Destroy(gameBoardArea);
            Destroy(this);
        }

    }
}
