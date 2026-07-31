#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf(" a+b*c = %d\n", a + b * c);
    printf("(a+b)*c = %d\n", (a + b) * c);
    printf("a/b = %d\n", a / b);
    printf("a%%b = %d\n", a % b);
    return 0;
}