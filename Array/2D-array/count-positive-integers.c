#include <stdio.h>
int countPositive(int arr[], int size);

int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int totalPositiveCount = 0;
    for (int i = 0; i < rows; i++)
    {
        totalPositiveCount += countPositive(matrix[i], cols);
    }

    printf("Total number of positive integers in the matrix: %d\n", totalPositiveCount);

    return 0;
}
int countPositive(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }

    return count;
}
