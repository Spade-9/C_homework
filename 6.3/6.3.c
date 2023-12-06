#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    n = n - m;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m - i; j++)
        {
            for (int k = 0; k < m - i - j; k++)
            {
                if ((i + j * 2 + k * 3) == n)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
