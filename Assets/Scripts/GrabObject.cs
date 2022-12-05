using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class GrabObject : MonoBehaviour
{
    [SerializeField] private Camera arCamera;
    [SerializeField] private LayerMask GrabMask;        // Grab 가능한 layer 지정
    [SerializeField] private LayerMask ArcBallMask;     // 카메라 정면에 존재하는 가상의 구
    [Space]
    [SerializeField] private float RayCastRange;        // Raycast maxDistanse 값
    [SerializeField] private Transform BlockAlign;      // block이 정렬될 방향 => 게임 보드

    private GameObject grabObject;
    private bool isGrab = false;
    private Vector2 ScreenCenter;
    private Vector2 prevTouchPos;                       // 직전 프레임의 Input.GetTouch(0).position

    private Vector3 relativePos;                        // Grab 시작시 grabObject의 카메라공간 좌표
    private Vector3 vStart;
    private Vector3 vEnd;

    [SerializeField] private Transform accumulatedRot;  // vStart와 vEnd로 계산된 rotation들의 누적 정도
    private Quaternion prevRot;                         // 직전 프레임의 accumulatedRot.rotation 정렬 상태 (90도 snap)

    void Start()
    {
        // 화면 중앙 좌표, raycast 방향으로 사용
        ScreenCenter = new Vector2(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);

        // 정렬 방향이 할당되지 않으면 arcball의 transform을 대신 넣음
        if (!BlockAlign)
        {
            BlockAlign = new GameObject().GetComponent<Transform>();
            BlockAlign.rotation = transform.rotation;
        }
        if (!accumulatedRot)
        {
            accumulatedRot = new GameObject().GetComponent<Transform>();
        }
    }
    void Update()
    {
        // touch가 일어난 경우에만 실행
        if (Input.touchCount == 0)
            return;

        Touch touch = Input.GetTouch(0);

        if (isGrab)
        {
            grabObject.transform.position = arCamera.transform.rotation * relativePos + arCamera.transform.position;
        }

        // touch 시작 => 조준한 block을 grabobject로 설정
        if (touch.phase == TouchPhase.Began)
        {
            Ray ray = arCamera.ScreenPointToRay(ScreenCenter);

            // block을 구성하는 cube들에 hit
            if (Physics.Raycast(ray, out RaycastHit hit, RayCastRange, GrabMask))
            {
                grabObject = hit.collider.gameObject.transform.parent.gameObject;
                relativePos = Quaternion.Inverse(arCamera.transform.rotation) * (grabObject.transform.position - arCamera.transform.position);

                accumulatedRot.rotation = grabObject.transform.rotation;
                prevRot = accumulatedRot.rotation;

                prevTouchPos = touch.position;

                isGrab = true;
            }
        }
        // touch 종료시 Grab 해제
        else if (touch.phase == TouchPhase.Ended)
        {
            isGrab = false;
        }
        else if (touch.phase != TouchPhase.Canceled) // Moved나 Stationary인 경우
        {
            if (isGrab) // grab하고있는 object가 있을 때만 회전 수행
            {
                // 스크린 어디를 터치하고 있어도 아크볼 회전이 가능하도록, 이전과의 좌표 차이를 적용
                Ray ray = Camera.main.ScreenPointToRay(ScreenCenter);
                if (Physics.Raycast(ray, out RaycastHit hit, RayCastRange, ArcBallMask))
                {
                    // 아크볼 정면 point로의 vector를 회전 계산 기준으로 사용
                    vStart = hit.point - transform.position;
                }

                ray = Camera.main.ScreenPointToRay(ScreenCenter + touch.position - prevTouchPos);
                if (Physics.Raycast(ray, out  hit, RayCastRange, ArcBallMask))
                {
                    vEnd = hit.point - transform.position;
                }

                if (Quaternion.Angle(Quaternion.LookRotation(vStart), Quaternion.LookRotation(vEnd)) > 5) // 한 프레임에서 5도 보다 크게 회전하면 적용
                {
                    // 이전 프레임 대비 회전량을 accumulatedRot에 global 회전으로 적용
                    Quaternion temp = Quaternion.LookRotation(vEnd) * Quaternion.Inverse(Quaternion.LookRotation(vStart));
                    accumulatedRot.rotation = temp * accumulatedRot.rotation;
                }

                // rotation snap 판정
                Vector3 alignedForward = NearestWorldAxis(accumulatedRot.forward);
                Vector3 alignedUp = NearestWorldAxis(accumulatedRot.up);
                if (prevRot != Quaternion.LookRotation(alignedForward, alignedUp))
                {
                    // 다음 프레임에는 현재 상태를 prevRot로 사용해야 함
                    grabObject.transform.rotation = Quaternion.LookRotation(alignedForward, alignedUp);
                    prevRot = grabObject.transform.rotation;
                    accumulatedRot.rotation = prevRot;
                }

                prevTouchPos = touch.position;
            }
        }

        
    }

    private Vector3 NearestWorldAxis(Vector3 input)
    {
        Vector3 v = Quaternion.Inverse(BlockAlign.rotation) * input;

        if (Mathf.Abs(v.x) < Mathf.Abs(v.y))
        {
            v.x = 0;
            if (Mathf.Abs(v.y) < Mathf.Abs(v.z))
                v.y = 0;
            else
                v.z = 0;
        }
        else
        {
            v.y = 0;
            if (Mathf.Abs(v.x) < Mathf.Abs(v.z))
                v.x = 0;
            else
                v.z = 0;
        }
        return BlockAlign.rotation * v;
    }
}