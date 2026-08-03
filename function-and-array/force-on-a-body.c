#include <stdio.h>
float force(float mass)
{
    return mass * 9.8;  // Using standard gravitational acceleration
}
int main()
{
    float mass;
    printf("Enter mass (in kg): ");
    scanf("%f", &mass);

    float result = force(mass);
    printf("The force on the body is: %.2f N\n", result);

    return 0;
}