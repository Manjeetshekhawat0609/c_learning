#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1;
    printf("Enter the x and y coordinates of the vector: ");
    scanf("%d %d", &v1.x, &v1.y);
    printf("The vector is: (%d, %d)\n", v1.x, v1.y);

    return 0;
}
