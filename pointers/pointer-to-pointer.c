#include <stdio.h>
int main()
{
    int i = 50;
    int *ptr = &i;
    int **ptr2 = &ptr;
    printf("value of i: %d\n", **ptr2);
    printf("value using pointer: %d\n", *ptr);
    printf("value using pointer to pointer: %d\n", **ptr2);
    return 0;
}