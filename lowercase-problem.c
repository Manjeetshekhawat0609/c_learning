#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z')
    {
        printf("The character is already lowercase: %c\n", character);
    }
    else if (character >= 'A' && character <= 'Z')
    {
        character = character + 32; // Convert to lowercase
        printf("The character is now lowercase: %c\n", character);
    }
    else
    {
        printf("The character is not a letter.\n");
    }
}