#include <stdio.h>

// 插入排序（升序）
// 参数说明：数组，数组中已有元素个数
void InsertSort(int a[], int n);

int main()
{
    int n, i, num[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    InsertSort(num, n);
    return 0;
}

void InsertSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (a[j] < a[j - 1])
            {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
            else
                break;
        }
        printf("%d", a[0]);
        for (int j = 1; j < n; j++)
            printf(" %d", a[j]);
        printf("\n");
    }
}