#include <stdio.h>

int main()
{
    int nums[100];
    int n;
    int i;
    int total = 0;
    int leftSum = 0;
    int rightSum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for(i = 0; i < n; i++)
    {
        rightSum = total - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    printf("%d", pivot);

    return 0;
}
```

### Sample Input 1

```text
6
1 7 3 6 5 6
```

### Output
