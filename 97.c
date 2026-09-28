#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    printf("%c.", str[0]);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}