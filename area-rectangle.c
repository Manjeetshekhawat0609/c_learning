// #include <stdio.h>
// int main()
// {
//     int length, width;
//     printf("Enter length and width of the rectangle: ");
//     scanf("%d %d", &length, &width);
//     printf("Area of the rectangle = %d\n", length * width);
//     printf("Perimeter of the rectangle = %d\n", 2 * (length + width));
//     return 0;
// }



#include <stdio.h>

int main()
{
    int a = 20;
    int b = 6;

    printf("%d\n", a / b);
    printf("%d\n", a % b);
    printf("%d\n", a + b * 2);
    printf("%d\n", (a + b) * 2);

    return 0;
}