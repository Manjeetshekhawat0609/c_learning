// #include <stdio.h>
// int main()
// {
//     int n, sum = 0, i = 1;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     do
//     {
//         sum += i;
//         i++;
//     } while (i <= n);
//     printf("The sum of first %d natural numbers is %d\n", n, sum);
//     return 0;
// }


#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is %d\n", n, sum(n));
    return 0;
}   