#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[100][100] = {0};

    int row = 0, col = 0;
    int value = 1;
    // 注意：zlh那个傻逼把矩阵转置了，他懒得改了
    // 所以这个数组里面存的是转置矩阵
    for (int i = 1; i <= n * n; i++)
    {
        matrix[row][col] = value++;

        if ((row + col) % 2 == 0) // 偶对角线（从左上角1开始）
        {
            if (col == n - 1)
            {
                row++;
            }
            else if (row == 0)
            {
                col++;
            }
            else
            {
                row--;
                col++;
            }
        }
        else // 奇对角线
        {
            if (row == n - 1)
            {
                col++;
            }
            else if (col == 0)
            {
                row++;
            }
            else
            {
                row++;
                col--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matrix[j][i]);
            if (j != n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }

    return 0;
}