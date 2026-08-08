#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];
    int sum = 0;

    // Input elements into the 2D array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &array[i][j]);
            sum += array[i][j]; // Add each element to sum
        }
    }

    // Output the sum of all elements
    printf("The sum of all elements in the 2D array is: %d\n", sum);

    return 0;

}