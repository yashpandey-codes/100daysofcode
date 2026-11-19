
#include <stdio.h>

int main()
{
    int a[100], freq[101] = {0};
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (freq[a[i]] == 1)
        {
            printf("%d", a[i]);
            break;
        }

        freq[a[i]]++;
    }

    return 0;
}
