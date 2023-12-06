#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n], first_2 = 2, first_1 = 1;

    for (int j = 2; j < n; j += 2)
    {
        int num = first_2;
        for (int k = 0; k < j; k++)
        {
            matrix[j - 1 - k][k] = num;
            num++;
        }
        first_2 += j * 2 + 1;
    }
    for (int j = 1; j <= n; j += 2)
    {
        int num = first_1;
        for (int k = 0; k < j; k++)
        {
            matrix[k][j - 1 - k] = num;
            num++;
        }
        first_1 += 2 * j + 1;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = n - i; j < n; j++)
            matrix[i][j] = n * n + 1 - matrix[n - 1 - i][n - 1 - j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            printf("%d ", matrix[i][j]);
        printf("%d\n", matrix[i][n - 1]);
    }
    printf(" ");
    return 0;
}