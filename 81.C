```c
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
            break;

        i++;
    }

    printf("%d", i);

    return 0;
}
```

**Sample Output:**

```text
Input:
Hello

Output:
5
```

This counts the characters one by one **without using `strlen()`**.
