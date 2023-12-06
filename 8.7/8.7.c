#include <stdio.h>

int countBinary(int);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", countBinary(n));

    return 0;
}

int countBinary(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return 1 + countBinary(n / 2);
}