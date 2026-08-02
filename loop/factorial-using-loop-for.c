#include <stdio.h>
int main()
{
    int factorial = 1, i, number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    for (i = 1; i <= number; ++i)
    {
        factorial *= i; // factorial = factorial * i;
    }
    printf("Factorial of %d is %d\n", number, factorial);
    return 0;
}