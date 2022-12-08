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
    private bool isInBound = true;
    private BlockPosition BP;
    private List<Transform> Blocks;
    private List<Transform> ClosestMarkers;
    private List<Transform> PrevClosestMarkers;

    private void Start()
    {
        BaseObject = GameObject.Find("BaseObject");
        Planes = BaseObject.transform.GetChild(0).gameObject;
        Markers = BaseObject.transform.GetChild(1).gameObject;
        BP = Markers.GetComponent<BlockPosition>();
        Initialize();
    }

    void Update()
    {
        GetClosestMarker();
        if (isInBound)
        {
            SnapTranslate();
        }
    }

    private void SnapTranslate()
    {
        this.gameObject.transform.Translate(ClosestMarkers[0].position - Blocks[0].transform.position, Space.World);
    }

    private void Initialize()
    {
        MarkerTransforms = new();
        PlaneTransforms = new();
        Blocks = new();
        ClosestMarkers = new();
        PrevClosestMarkers = new();
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

    private void GetClosestMarker()
    {
        List<Transform> closestMarker = new();

        foreach (Transform block in Blocks)
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
        if (closestMarker.Count == closestMarker.Distinct().Count())        //No overlap
        {
            ClosestMarkers = closestMarker;
            if (ClosestMarkers != PrevClosestMarkers)
            {
                SetMatrix();
                PrevClosestMarkers.Clear();
                PrevClosestMarkers = ClosestMarkers.ToList();
            }
            isInBound = true;
        }
        else
        {
            ClosestMarkers.Clear();
            SetMatrix();
            PrevClosestMarkers.Clear();
            isInBound = false;
        }
    }

    private void SetMatrix()
    {
        int x, y, z;
        foreach (Transform item in PrevClosestMarkers)
        {
            x = item.parent.GetSiblingIndex();
            int temp = item.GetSiblingIndex();
            y = temp % 4;
            z = temp / 4;
            BP.SetCollision(x, y, z, false);
        }
        foreach (Transform item in ClosestMarkers)
        {
            x = item.parent.GetSiblingIndex();
            int temp = item.GetSiblingIndex();
            y = temp % 4;
            z = temp / 4;
            BP.SetCollision(x, y, z, true);
        }
    }
}
