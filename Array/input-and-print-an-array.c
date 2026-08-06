#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter marks of 5 students: ");
    scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    printf("marks of 5 students are: %d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}