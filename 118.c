
#include <stdio.h>

int main()
{
    int a[100], n;
    int i, sum = 0, total;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
