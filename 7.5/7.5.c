#include <stdio.h>

int mypow(int, int);

int main()
{
    int x, n;

    scanf("%d%d", &x, &n);
    printf("%d\n", mypow(x, n));

    return 0;
}

int mypow(int x, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}