#include <stdio.h>
int main()
{
    int number, i = 2, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    do
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    } while (i <= number / 2);
    if (isPrime && number > 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}