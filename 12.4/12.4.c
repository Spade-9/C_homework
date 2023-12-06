#include <stdio.h>
int findMax(int a[], int m); // 寻找某行的最大值，并返回下标
int main()
{
    int m, n, flag = 0;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);
    }
    int i = 0, tmp = 0;
    for (i = 0; i < n; i++)
    {
        tmp = findMax(matrix[i], m);
        int min = matrix[i][tmp];
        for (int j = 0; j < n; j++)
        {
            flag = min > matrix[j][tmp] ? 1 : 0; // 如果不是该列最小，flag=1；
            if (flag)
                break;
        }
        if (flag == 0)
            break;
    }
    if (flag)
        printf("There is no saddle point in the matrix.\n");
    else
        printf("The saddle point is (%d,%d)=%d.\n", i, tmp, matrix[i][tmp]);
    return 0;
}

int findMax(int a[], int m)
{
    int flag = 0, tmp = a[0];
    for (int i = 1; i < m; i++)
    {
        if (a[i] > tmp)
        {
            flag = i;
            tmp = a[i];
        }
    }
    return flag;
}
