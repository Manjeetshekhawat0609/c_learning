#include <stdio.h>

int main()
{
    int a = 25;
    int *ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void *)ptr);
    printf("Value at address ptr: %d\n", *ptr);
    return 0;
}