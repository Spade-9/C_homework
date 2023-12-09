// 错误原因：a,b内都可能有重复数字，故b[0]可能与多个a中元素相等
// 而该程序只能判断a中第一个与b[0]相等的位置

#include <stdio.h>
int is(int, int, int *);
int main()
{
    int a[1005], i, tmp = 0;
    for (i = 0; tmp != -1; i++)
    {
        scanf("%d", &tmp);
        a[i] = tmp;
    } // 此时a[i-1]=-1
    int b, flag;
    scanf("%d", &b);
    flag = is(b, i - 1, a);
    if (flag == -1)
        printf("ListB is not the sub sequence of ListA.\n");
    else
    {
        for (flag += 1; flag <= i - 1; flag++)
        {
            scanf("%d", &b);
            if (b == -1)
            {
                printf("ListB is the sub sequence of ListA.\n");
                break;
            }
            if (a[flag] != b)
                break;
        }

        if (b != -1)
            printf("ListB is not the sub sequence of ListA.\n");
    }

    return 0;
}

int is(int b, int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        if (b == a[i])
            return i;
    }
    return -1;
}
