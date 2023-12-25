#include <stdio.h>

int fib[3] = {0};

int main()
{
    fib[1] = fib[2] = 1;
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++)
    {
        int tmp = fib[2];
        fib[2] = (fib[2] + fib[1]) % 101;
        fib[1] = tmp;
    }
    printf("%d\n", fib[2]);
}