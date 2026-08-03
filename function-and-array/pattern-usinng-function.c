#include <stdio.h>

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}