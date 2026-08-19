#include <stdio.h>
int main()
{
    FILE *ptr;
    int n, i;
    printf("Enter the number for which you want to generate the multiplication table: ");
    scanf("%d", &n);
    ptr = fopen("multiplication-table.txt", "w");
    if (ptr == NULL)
    {
        printf("Error opening file.");
        return 1;
    }
    for (i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", n, i, n * i);
    }
    fclose(ptr);
    return 0;
}