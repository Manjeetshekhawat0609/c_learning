#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i = n;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}