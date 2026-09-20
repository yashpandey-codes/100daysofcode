#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c;
    int i, j;
    int distinct = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r - 1; i++)
    {
        for(j = i + 1; j < r; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
            }
        }
    }

    if(distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}