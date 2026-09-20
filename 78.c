#include <stdio.h>

int main()
{
    int a[10][10];
    int n;
    int i, j;
    int sum = 0;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}