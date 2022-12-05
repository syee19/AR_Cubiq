using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseObjectManager : MonoBehaviour
{
    [SerializeField]
    private Transform Markers;
    [SerializeField]
    private bool isDrawMarker;

    private void OnDrawGizmos()
    {
        Markers = this.transform.Find("Markers");
        if (isDrawMarker)
        {
            foreach (Transform layer in Markers.transform)
            {
                foreach (Transform marker in layer)
                {
                    marker.GetComponent<MeshRenderer>().enabled = true;
                }
            }
        }
        else
        {
            foreach (Transform layer in Markers.transform)
            {
                foreach (Transform marker in layer)
                {
                    marker.GetComponent<MeshRenderer>().enabled = false;
                }
            }
        }
    }
}
