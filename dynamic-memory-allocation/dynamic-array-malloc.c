#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Use the allocated memory
    for (int i = 0; i < 6; i++)
    {
        ptr[i] = i + 1;
    }
    // Print the values
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    // Free the allocated memory
    free(ptr);
    return 0;
}