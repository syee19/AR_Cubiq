using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MarkerBehavior : MonoBehaviour
{
    private BlockPosition BP;
    private int x, y, z;

    private void Start()
    {
        BP = this.transform.parent.parent.gameObject.GetComponent<BlockPosition>();
        x = transform.parent.GetSiblingIndex();
        int temp = this.transform.GetSiblingIndex();
        y = temp % 4;
        z = temp / 4;
    }

    private void Update()
    {
        if (BP.GetCollision(x, y, z))
        {
            this.gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
        }
        else
        {
            this.gameObject.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        }
    }
}
