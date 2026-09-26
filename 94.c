#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0;
    int max = 0, len;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';
            len = strlen(word);

            if (len > max)
            {
                max = len;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}