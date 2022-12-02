using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class GrabObject : MonoBehaviour
{
    [SerializeField] private LayerMask PickupMask;      // Grab 가능한 layer 지정\
    [Space]
    [SerializeField] private float PickupRange;         // Grab 가능한 거리
    private Rigidbody CurrentObject;

    // Raycast 결과를 저장하는 data
    private List<ARRaycastHit> m_Hits = new List<ARRaycastHit>();
    private ARRaycastManager m_RaycastManager;

    private GameObject grabObject;
    private bool isGrab = false;
    [SerializeField] private Camera arCamera;
    private Vector3 ScreenCenter;
    private Vector3 relative;
    private Quaternion rot;

    void Start()
    {
        // ARRaycastManager 초기화
        m_RaycastManager = GetComponent<ARRaycastManager>();

        // 화면 중앙 raycast 방향
        ScreenCenter = new Vector3(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);
    }
    void Update()
    {
        // touch가 일어난 경우에만 실행
        if (Input.touchCount == 0)
            return;

        Touch touch = Input.GetTouch(0);

        // touch 시작시
        if (touch.phase == TouchPhase.Began)
        {
            Ray ray;
            RaycastHit hitobj;

            ray = arCamera.ScreenPointToRay(ScreenCenter);

            // Ray를 통한 object 인식
            if(Physics.Raycast(ray, out hitobj, PickupRange, PickupMask))
            {
                // 인식한 object를 grabObject로 설정
                grabObject = hitobj.collider.gameObject;
                isGrab = true;
                relative = Quaternion.Inverse(arCamera.transform.rotation) * (grabObject.transform.position - arCamera.transform.position); //   arCamera.transform.InverseTransformPoint(gameObject.transform.position);
                rot = Quaternion.Inverse(arCamera.transform.rotation) * grabObject.transform.rotation;
            }
        }
        // touch 종료시
        else if (touch.phase == TouchPhase.Ended)
        {
            isGrab = false;
        }

        if (isGrab)
        {
            Vector3 distance = new Vector3(0.0f, 0.0f, relative.magnitude);
            grabObject.transform.position = arCamera.transform.rotation * relative + arCamera.transform.position;
            // grabObject.transform.rotation = arCamera.transform.rotation * rot; // 카메라 회전에 따라 object도 함께 회전
        }
    }

}