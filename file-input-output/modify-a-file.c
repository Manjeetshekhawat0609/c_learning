#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("sample.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fclose(ptr);
        ptr = fopen("sample.txt", "w");
        num *= 2;
        fprintf(ptr, "%d", num);
        fclose(ptr);
    }
}