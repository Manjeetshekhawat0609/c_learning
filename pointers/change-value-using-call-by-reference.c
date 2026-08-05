#include <stdio.h>
void change(int *x);
int main()
{
    int a = 10;
    printf("Before change: %d\n", a);
    change(&a);
    printf("After change: %d\n", a);
    return 0;
}
void change(int *x)
{
    *x = *x * 10;
}