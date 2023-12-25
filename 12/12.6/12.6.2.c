#include <stdio.h>
int a[105][105] = {0};

int main()
{
    int n, x = 0, y = 0, tot = 1;
    scanf("%d", &n);
    while (tot <= n * n)
    {
        a[x][y] = tot++;
        if ((x + y) % 2 == 0)
        {
            if (y == 0 && x != n - 1)
                x++;
            else if (x == n - 1)
                y++;
            else
            {
                x++;
                y--;
            }
        }
        else
        {
            if (x == 0 && y != n - 1)
                y++;
            else if (y == n - 1)
                x++;
            else
            {
                x--;
                y++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            printf("%d ", a[i][j]);
        printf("%d\n", a[i][n - 1]);
    }
}