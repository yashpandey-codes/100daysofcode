```c
#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;

    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for (int i = 1; i <= x; i++)
        {
            leftSum = leftSum + i;
        }

        // Sum from x to n
        for (int i = x; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
```

### Example

For `n = 8`:

* Sum `1 to 6` = `21`
* Sum `6 to 8` = `6 + 7 + 8 = 21`

So the pivot integer is **6**.

**Output:**

```text
6
```

For `n = 4`, no such `x` exists, so:

```text
-1
```

This version is intentionally straightforward and uses loops so it's easy to understand for a beginne
