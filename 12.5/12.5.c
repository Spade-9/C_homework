#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n], mark[n], sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
        mark[i] = i;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum[i] += matrix[i][j];
        }
    }
    int sum0;
    for (int i = 0; i < n - 1; i++)
    {
        sum0 = sum[mark[0]];
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (sum0 > sum[mark[j + 1]])
            {
                int tmp = mark[j];
                mark[j] = mark[j + 1];
                mark[j + 1] = tmp;
            }
            else
                sum0 = sum[mark[j + 1]];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            printf("%d ", matrix[mark[i]][j]);
        printf("%d\n", matrix[mark[i]][n - 1]);
    }
    printf(" ");
    return 0;
}