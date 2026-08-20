#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Use the allocated memory
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
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