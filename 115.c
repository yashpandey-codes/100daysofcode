
#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, j, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }

        if (found == 1)
            break;
    }

    if (found == 0)
    {
        printf("-1 -1");
    }

    return 0;
}
