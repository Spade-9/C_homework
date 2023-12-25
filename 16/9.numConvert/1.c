#include <stdio.h>

// 将n进制转换为m进制
int numConvert(int, int, int);

int main()
{
    int number, m, n;

    scanf("%d%d%d", &number, &n, &m);

    printf("%d\n", numConvert(number, n, m));
    return 0;
}

// 将n进制的数number转化为m进制的数并返回
#include <math.h>
int numConvert(int number, int n, int m)
{
    int tmp = 0;
    for (int i = 0; number > 0; i++)
    {
        tmp += number % 10 * pow((double)n, (double)i);
        number /= 10;
    }
    for (int i = 0; tmp > 0; i++)
    {
        number += tmp % m * pow(10, (double)i);
        tmp /= m;
    }
}
