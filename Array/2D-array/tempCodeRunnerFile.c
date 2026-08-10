#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter dimensions for 3D array (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int array3D[x][y][z];

    // Input elements into the 3D array
    printf("Enter elements for the 3D array:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("Element at [%d][%d][%d]: ", i, j, k);
                scanf("%d", &array3D[i][j][k]);
            }
        }
    }

    // Displaying the 3D array
    printf("The 3D array is:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("%d ", array3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}