```c
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
```

**Sample Output:**

```text
Input:
hello world

Output:
hello-world
```
