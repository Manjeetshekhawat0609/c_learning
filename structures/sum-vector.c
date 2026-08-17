#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}
int main()
{
    struct vector v1, v2, sum;
    printf("Enter the x and y coordinates of the first vector: ");
    scanf("%d %d", &v1.x, &v1.y);
    printf("Enter the x and y coordinates of the second vector: ");
    scanf("%d %d", &v2.x, &v2.y);
    sum = sumVector(v1, v2);
    printf("The sum of the vectors is: (%d, %d)\n", sum.x, sum.y);
    return 0;
}