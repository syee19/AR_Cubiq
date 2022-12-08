using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockPosition : MonoBehaviour
{
    public bool[,,] blockCollision = new bool[4, 4, 4];

    [SerializeField]
    private Vector3[] initPos = new Vector3[12];

    private void Start()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    blockCollision[i, j, k] = false;
                }
            }
        }

        foreach (var pos in initPos)
        {
            blockCollision[(int)pos.x, (int)pos.y, (int)pos.z] = true;
        }
    }

    public bool GetCollision(int i, int j, int k)
    {
        return blockCollision[i, j, k];
    }

    public void SetCollision(int i, int j, int k, bool value)
    {
        blockCollision[i, j, k] = value;
        Debug.Log("collision");

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return) && CheckAnswer()) Debug.Log("Check!");
    }

    public bool CheckAnswer()
    {
        /*for (int i = 0; i < 4; i++)
        {
            for (int j = 0;j < 4;j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    
                }
            }
        }*/

        foreach(var item in blockCollision)
        {
            if (!item) return false;
        }

        return true;
    }
}
