#include <stdio.h>

struct complex 
{
    float real;
    float imaginary;
};
void display(struct complex c)
{
    printf("%f + %fi", c.real, c.imaginary);
}
int main() 
{
    int i;
    struct complex c[5];
    for (i = 0; i < 5; i++)
    {
    scanf("%f %f", &c[i].real, &c[i].imaginary);
    }
    for (i = 0; i < 5; i++)
    {
    display(c[i]);
    }
    return 0;
}