#include<stdio.h>
int main(){
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("addition = %d\n", a + b);
    printf("subtraction = %d\n", a - b);
    printf("multiplication = %d\n", a * b);
    printf("division = %f\n", (float)a / b);
    printf("remainder = %d\n", a % b);
    return 0;
    
}