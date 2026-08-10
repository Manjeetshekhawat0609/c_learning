#include <stdio.h>
#include <string.h>

void encryptString(char str[], int key)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] += key;
        i++;
    }
}

int main()
{
    char str[100];
    int key;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    printf("Enter the encryption key: ");
    scanf("%d", &key);

    encryptString(str, key);
    printf("Encrypted string: %s\n", str);

    return 0;
}
