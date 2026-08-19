#include <stdio.h>
int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Could not open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL)
    {
        printf("Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy character by character from source to destination
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
        fputc(ch, destFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return 0;
}