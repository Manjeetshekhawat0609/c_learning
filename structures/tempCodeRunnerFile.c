#include <stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1;
    struct vector *ptr;
    ptr = &v1;
    printf("Enter the x and y coordinates of the vector: ");
    scanf("%d %d", &ptr->x, &ptr->y);
    printf("The vector is: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}