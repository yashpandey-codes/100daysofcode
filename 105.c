```c
#include <stdio.h>

int main()
{
    int nums[100];
    int n, i, j;
    int count;
    int majority = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}
```

### Sample Input 1

```text
3
3 2 3
```

### Output

```text
3
```

### Sample Input 2

```text
7
2 2 1 1 1 2 2
```

### Output

```text
2
```

### Sample Input 3

```text
8
2 2 1 1 1 2 2 3
```

### Output

```text
-1
```

**Simple logic:**

* Count how many times each element occurs.
* If `count > n/2`, it is the majority element.
* If no element satisfies this condition, print `-1`.
