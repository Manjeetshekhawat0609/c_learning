// multiplication table of 5
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", 5, i, i * 5);
    }
    return 0;
}


// reverse multiplication table of 8
#include <stdio.h>
int main()
{
    int i;
    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", 8, i, i * 8);
    }
    return 0;
}