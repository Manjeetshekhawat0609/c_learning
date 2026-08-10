#include <stdio.h>
#include <string.h>

void myStrcpy(char target[], char source[])
{
    int i = 0;

    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }

    target[i] = '\0';
}
int main()
{
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    myStrcpy(str2, str1);
    printf("Copied string is: %s\n", str2);
    return 0;
}