#include <stdio.h>
int main()
{
    int total, marks1, marks2, marks3;
    printf("enter marks of 3 subjects: ");
    scanf("%d%d%d", &marks1, &marks2, &marks3);
    total = marks1 + marks2 + marks3;
    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && total >= 120)
        printf("student has passed");
    else
        printf("student has failed");
    return 0;
}