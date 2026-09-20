#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c;
    int i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(j = 0; j < c; j++)
    {
        int x = 0;
        int y = j;

        while(x < r && y >= 0)
        {
            printf("%d ", a[x][y]);
            x++;
            y--;
        }
    }

    for(i = 1; i < r; i++)
    {
        int x = i;
        int y = c - 1;

        while(x < r && y >= 0)
        {
            printf("%d ", a[x][y]);
            x++;
            y--;
        }
    }

    return 0;
}