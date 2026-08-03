#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a, b, c;
    float avg;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate average
    avg = average(a, b, c);

    // Output the average
    printf("The average of %d, %d and %d is: %.2f\n", a, b, c, avg);

    return 0;
}