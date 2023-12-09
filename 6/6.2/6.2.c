#include <stdio.h>
int main()
{
    int m, n, tmp;
    scanf("%d %d", &m, &n);
    for (int i = 0; i <= m; i++)
    {
        tmp = n - i * 2;
        for (int j = 0; j <= m - i; j++)
        {
            if (tmp - j * 4 == 6 * (m - i - j))
            {
                printf("%d %d %d\n", i, j, m - i - j);
            }
        }
    }
    return 0;
}