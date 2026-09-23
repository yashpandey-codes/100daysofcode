```c
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    fgets(str, 100, stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            pa
```
