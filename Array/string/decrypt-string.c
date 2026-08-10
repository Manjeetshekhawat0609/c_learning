#include <stdio.h>
#include <string.h>
void decryptString(char str[], int key)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] -= key;
        i++;
    }
}
int main()
{
    char str[100];
    int key;

    printf("Enter an encrypted string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    printf("Enter the decryption key: ");
    scanf("%d", &key);

    decryptString(str, key);
    printf("Decrypted string: %s\n", str);

    return 0;
}