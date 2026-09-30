#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int i;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
```

### Sample Input

```text
6
5 7 7 8 8 10
8
```

### Output

```text
3,4
```

### How it works

* `first = -1` and `last = -1` initially means the target is **not found**.
* The `for` loop checks every element.
* When the target is found for the **first time**, its index is stored in `first`.
* Every
