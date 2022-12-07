using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BlockSnapAlt : MonoBehaviour
{
    private GameObject Markers;
    private GameObject Planes;

    private GameObject BaseObject;
    private List<Transform> MarkerTransforms;
    private List<Transform> PlaneTransforms;
    private bool isInBound;
    private BlockPosition BP;
    private List<Transform> Blocks;
    private List<Transform> ClosestMarkers;

    private void Start()
    {
        BaseObject = GameObject.Find("BaseObject");
        Planes = BaseObject.transform.GetChild(0).gameObject;
        Markers = BaseObject.transform.GetChild(1).gameObject;
        BP = Markers.GetComponent<BlockPosition>();

        InitializeTransforms();
    }

    void Update()
    {
        /*SnapTranslate();
        RefreshBaseBlock();*/
        if (isInBound)
        {
            SnapTranslate();
        }
    }

    private void SnapTranslate()
    {
        ClosestMarkers = GetClosestMarker(ClosestMarkers);

        this.gameObject.transform.Translate(ClosestMarkers[0].position - Blocks[0].transform.position, Space.World);
    }

    private void InitializeTransforms()
    {
        MarkerTransforms = new();
        PlaneTransforms = new();
        Blocks = new();
        ClosestMarkers = new();
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
        foreach (Transform block in this.transform)
        {
            Blocks.Add(block);
        }
    }

    private List<Transform> GetClosestMarker(List<Transform> ClosestMarkers)
    {
        List<Transform> closestMarker = new();

        foreach(Transform block in Blocks)
        {
            float closestDist = (float)int.MaxValue;
            List<Transform> temp = new();
            foreach (Transform marker in MarkerTransforms)
            {
                float dist = Vector3.Distance(block.transform.position, marker.position);
                if (closestDist > dist)
                {
                    closestDist = dist;
                    temp.Clear();
                    temp.Add(marker);
                }
            }
            closestMarker.Add(temp[0]);
        }
        if (closestMarker.Count == closestMarker.Distinct().Count())
        {
            ClosestMarkers = closestMarker;
            return ClosestMarkers;
        }
        else return ClosestMarkers;
    }

    private void OnTriggerStay(Collider other)
    {
        if (!isInBound && other.gameObject.layer.Equals(8))
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
