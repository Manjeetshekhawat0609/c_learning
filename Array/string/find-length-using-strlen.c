#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    printf("Length of the string is: %zu\n", len);
    return 0;
}