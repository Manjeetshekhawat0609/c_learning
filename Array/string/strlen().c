#include <string.h>
#include <stdio.h>

int main()
{
    const char *str = "Hello, World!";
    size_t length = strlen(str);
    printf("The length of the string is: %zu\n", length);
    return 0;
}