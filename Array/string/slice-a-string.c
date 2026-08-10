#include <stdio.h>
#include <string.h>

void slice(char str[], int m, int n)
{
    int i = 0;

    while (m + i < n)
    {
        str[i] = str[m + i];
        i++;
    }

    str[i] = '\0';
}
int main()
{
    char str[100] = "Hello, World!";
    int m = 2, n = 10;

    slice(str, m, n);
    printf("Sliced string: %s\n", str);

    return 0;
}
