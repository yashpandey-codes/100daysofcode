
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Source file could not be opened!");
        return 1;
    }

    destination = fopen(destFile, "w");

    if (destination == NULL)
    {
        printf("Destination file could not be created!");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destFile);

    return 0;
}
