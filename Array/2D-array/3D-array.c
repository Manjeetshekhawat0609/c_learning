#include <stdio.h>

int main()
{
    int array3D[2][2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Address of array3D[%d][%d][%d] = %p\n",
                       i, j, k, (void *)&array3D[i][j][k]);
            }
        }
    }

    return 0;
}