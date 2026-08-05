#include <stdio.h>
void calculate(int a, int b, int *sum, float *average);
int main()
{
    int num1, num2, sum;
    float average;

    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    calculate(num1, num2, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
void calculate(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = (float)(*sum) / 2;
}