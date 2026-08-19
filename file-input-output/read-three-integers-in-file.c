#include <stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    ptr = fopen("three-integers.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file.");
        return 1;
    }
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("the value of a is %d and value of b is %d and value of c is %d", a, b, c);
    fclose(ptr);
    return 0;
}