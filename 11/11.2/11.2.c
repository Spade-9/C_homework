// 7－9－10－5－8－4－2－1－6－3－7－9－10－5－8－4－2
// %11,余数只可能有0－1－2－3－4－5－6－7－8－9－10这11个数字。
// 其分别对应的最后一位身份证的号码为1－0－X－9－8－7－6－5－4－3－2。
#include <stdio.h>
int main()
{
    char tmp;
    long sum = 0;
    int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char flag[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        getchar();
        for (int i = 0; i < 17; i++)
        {
            scanf("%c", &tmp);
            sum += (tmp - '0') * a[i];
        }
        sum %= 11;
        scanf("%c", &tmp);
        if (flag[sum] == tmp)
            printf("right\n");
        else
            printf("wrong\n");
        sum = 0;
    }
    return 0;
}