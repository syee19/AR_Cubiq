using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockColor : MonoBehaviour
{
    private void Start()
    {
        Shader shader = this.transform.GetChild(0).GetComponent<MeshRenderer>().material.shader;
        Material material = new Material(shader);
        Color color;
        int blockIndex = -1;
        for (int i = 0; i < 8; i++)
        {
            if (this.gameObject.name.Contains(i.ToString()))
            {
                blockIndex = i;
                Debug.Log(blockIndex);
            }
        }

        color = blockIndex switch
        {
            0 => new Color(186f, 79f, 210f, 255f),
            1 => new Color(95f, 61f, 148f, 255f),
            2 => new Color(64f, 108f, 209f, 255f),
            3 => new Color(74f, 181f, 209f, 255f),
            4 => new Color(106f, 192f, 255f, 255f),
            5 => new Color(204f, 199f, 111f, 255f),
            6 => new Color(200f, 151f, 113f, 255f),
            7 => new Color(182f, 103f, 114f, 255f),
            _ => new Color(235f, 235f, 235f, 255f),
        };

        material.SetColor("_Color", color);
        foreach (Transform block in this.transform)
        {
            block.GetComponent<MeshRenderer>().material = material;
        }
    }
}
