#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m + 2][n + 2];
    for (int i = 1; i <= m; i++)
    {
        matrix[i][0] = 0;
        for (int j = 1; j <= n; j++)
            scanf("%d", &matrix[i][j]);
        matrix[i][n + 1] = 0;
    }
    for (int i = 0; i < n + 2; i++)
    {
        matrix[0][i] = 0;
        matrix[m + 1][i] = 0;
    }
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = -matrix[x][y];
    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
            sum += matrix[i][j];
    }
    printf("%d", sum);
    return 0;
}