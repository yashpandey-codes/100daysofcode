
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, k;
    int length, maxLength;

    scanf("%s", s);

    length = strlen(s);
    maxLength = 0;

    for (i = 0; i < length; i++)
    {
        int count = 0;

        for (j = i; j < length; j++)
        {
            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    break;
                }
            }

            if (k < j)
            {
                break;
            }

            count++;
        }

        if (count > maxLength)
        {
            maxLength = count;
        }
    }

    printf("%d", maxLength);

    return 0;
}
