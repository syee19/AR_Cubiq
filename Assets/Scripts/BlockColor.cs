using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockColor : MonoBehaviour
{
    public Material material;
    private void Start()
    {
        //Material material = new Material(Resources.Load<Material>("DemoMat1"));
        material = new Material(Resources.Load<Material>("DemoMat1"));
        Color color;
        int blockIndex = -1;
        for (int i = 0; i < 8; i++)
        {
            if (this.gameObject.name.Contains(i.ToString()))
            {
                blockIndex = i;
            }
            if (this.gameObject.name.Contains("Alt"))
            {
                blockIndex = 8;
            }
        }


        color = blockIndex switch
        {
            0 => new Color32(186, 79, 210, 255),
            1 => new Color32(95, 61, 148, 255),
            2 => new Color32(64, 108, 209, 255),
            3 => new Color32(74, 181, 209, 255),
            4 => new Color32(124, 213, 83, 255),
            5 => new Color32(204, 199, 111, 255),
            6 => new Color32(200, 151, 113, 255),
            7 => new Color32(182, 103, 114, 255),
            8 => new Color32(225, 225, 225, 255),
            _ => new Color32(235, 235, 235, 255),
        };

        material.SetColor("_Color", color);
        ChangeColor();
    }

    public void ChangeColor()
    {
        foreach (Transform block in this.transform)
        {
            block.GetComponent<MeshRenderer>().material = material;
        }
    }
}
