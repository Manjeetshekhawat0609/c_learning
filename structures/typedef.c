#include <stdio.h>
typedef struct complex
{
    float real;
    float imaginary;
} ComplexNo;
int main()
{
    ComplexNo c1, c2;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);
    return 0;
}