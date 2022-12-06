using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockPosition : MonoBehaviour
{
    public bool[,,] blockCollision = new bool[4, 4, 4];

    private int[,] firstStage = new int[3, 4];
    private int[,] secondStage = new int[3, 4];
    private int[,] thirdStage = new int[3, 4];

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


    }

    public void SetCollision(int i, int j, int k, bool value)
    {
        blockCollision[i, j, k] = value;
        Debug.Log("collision");
    }
}
