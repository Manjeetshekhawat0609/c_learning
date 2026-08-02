#include <stdio.h>
int main()
{
    int factorial = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number >= 1)
    {
        factorial *= number;
        number--;
    }
    printf("Factorial = %d\n", factorial);
    return 0;
}