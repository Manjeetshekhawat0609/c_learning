#include <stdio.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex c1;
    printf("enter real part: ");
    scanf("%f", &c1.real);
    printf("enter imaginary value: ");
    scanf("%f", &c1.imaginary);
    printf("the complex number = %f + %fi", c1.real, c1.imaginary);
    return 0;
}