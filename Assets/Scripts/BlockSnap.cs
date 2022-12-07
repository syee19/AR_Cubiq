using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockSnap : MonoBehaviour
{
    private GameObject Markers;
    private GameObject Planes;
    private GameObject BaseBlock;
    private GameObject BaseObject;
    private List<Transform> MarkerTransforms;
    private List<Transform> PlaneTransforms;
    private bool isInBound;



    private void Start()
    {
        BaseObject = GameObject.Find("BaseObject");
        Planes = BaseObject.transform.GetChild(0).gameObject;
        Markers = BaseObject.transform.GetChild(1).gameObject;

        BaseBlock = this.transform.GetChild(0).gameObject;
        InitializeTransforms();
    }

    void Update()
    {
        /*SnapTranslate();
        RefreshBaseBlock();*/
        if (isInBound)
        {
            SnapTranslate();
            RefreshBaseBlock();
        }
    }

    private void SnapTranslate()
    {
        Transform closestMarker = GetClosestMarker();
        if (closestMarker != null)
        {
            this.gameObject.transform.Translate(closestMarker.position - BaseBlock.transform.position, Space.World);
        }
    }
    private void RefreshBaseBlock()
    {
        Transform _baseBlock = GetBaseBlock();
        if (_baseBlock != null)
        {
            BaseBlock = _baseBlock.gameObject;
        }
    }

    private void InitializeTransforms()
    {
        MarkerTransforms = new();
        PlaneTransforms = new();
        foreach (Transform layer in Markers.transform)
        {
            foreach (Transform marker in layer)
            {
                MarkerTransforms.Add(marker);
            }
        }
        foreach (Transform plane in Planes.transform)
        {
            PlaneTransforms.Add(plane);
        }
    }

    private Transform GetBaseBlock()
    {
        float closestDist = (float)int.MaxValue;
        Transform closestBlock = null;
        foreach (Transform block in this.transform)
        {
            float dist = Vector3.Distance(MarkerTransforms[0].position, block.position);
            if (closestDist > dist)
            {
                closestDist = dist;
                closestBlock = block;
            }
        }

        return closestBlock;
    }

    private Transform GetClosestMarker()
    {
        float closestDist = (float)int.MaxValue;
        Transform closestMarker = null;
        foreach (Transform marker in MarkerTransforms)
        {
            float dist = Vector3.Distance(BaseBlock.transform.position, marker.position);
            if (closestDist > dist)
            {
                closestDist = dist;
                closestMarker = marker;
            }
        }

        return closestMarker;
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.layer.Equals(8))
        {
            isInBound = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.layer.Equals(8))
        {
            isInBound = false;
        }
    }
}
