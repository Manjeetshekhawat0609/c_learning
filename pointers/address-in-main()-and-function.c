#include <stdio.h>
void display(int x);
int main()
{
    int x = 10;
    printf("Address of x in main(): %p\n", (void *)&x);
    display(x);
    return 0;
}

void display(int x)
{
    printf("%p\n", (void *)&x);
}
