#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Character '%c' is present in the string.\n", ch);
    else
        printf("Character '%c' is not present in the string.\n", ch);

    return 0;
}