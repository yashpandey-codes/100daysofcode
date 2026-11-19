
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int m, n;
    int i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements of first array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements of second array: ");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < m)
    {
        c[k++] = a[i++];
    }

    while (j < n)
    {
        c[k++] = b[j++];
    }

    printf("Merged array: ");

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
