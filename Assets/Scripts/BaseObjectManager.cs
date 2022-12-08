using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseObjectManager : MonoBehaviour
{
    [SerializeField]
    private Transform Markers;
    [SerializeField]
    private bool isDrawMarker;
    private bool markerFlag = true;

    private void OnDrawGizmos()
    {
        Markers = this.transform.GetChild(1);
        if (isDrawMarker && !markerFlag)
        {
            foreach (Transform layer in Markers.transform)
            {
                foreach (Transform marker in layer)
                {
                    marker.GetComponent<MeshRenderer>().enabled = true;
                }
            }
            markerFlag = true;
        }
        if (!isDrawMarker && markerFlag)
        {
            foreach (Transform layer in Markers.transform)
            {
                foreach (Transform marker in layer)
                {
                    marker.GetComponent<MeshRenderer>().enabled = false;
                }
            }
            markerFlag = false;
        }
    }
}
