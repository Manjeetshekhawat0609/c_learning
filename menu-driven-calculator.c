#include<stdio.h>
int main(){
    int a,b,choice;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("addition of %d and %d is: %d",a,b,a+b);
            break;
        case 2:
            printf("subtraction of %d and %d is: %d",a,b,a-b);
            break;
        case 3:
            printf("multiplication of %d and %d is: %d",a,b,a*b);
            break;
        case 4:
            if(b!=0)
                printf("division of %d and %d is: %.2f",a,b,(float)a/b);
            else
                printf("division by zero is not allowed.");
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}