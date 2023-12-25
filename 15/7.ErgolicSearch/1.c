#include <stdio.h>
#include <math.h>

int add(int n)
{
    if (n == 1)
        return 0;
    int sum = 1;
    int i;
    for (i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            sum += i + n / i;
    }
    if (i * i == n)
        sum += i;
    return sum;
}

int main()
{
    int a, b, c, flag = 0, cnt = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = a; i <= b; i++)
    {
        if (c >= abs(i - add(i)))
        {
            if (flag == 5)
            {
                flag = 0;
                printf("\n");
            }
            if (flag)
                printf("\t%d", i);
            else
                printf("%d", i);
            flag++;
        }
    }
    if (flag)
        printf("\n");
    else
        printf("There is no proper number in the interval.\n");
}