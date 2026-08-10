#include <stdio.h>
int main()
{
    int number;
    int table[10];
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 0; i < 10; i++)
    {
        table[i] = number * (i + 1);
    }
    printf("Multiplication table for %d:\n", number);
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", number, i + 1, table[i]);
    }
    return 0;
}