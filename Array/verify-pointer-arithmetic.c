#include <stdio.h>
int main()
{
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int *ptr = arr;
    printf("third element is: %d\n", *(ptr + 2));
    return 0;
}