#include <stdio.h>
int Num(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int space = Num(n);
    printf("%d\n", space);
    return 0;
}

int Num(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    if (n > 1)
        return Num(n - 1) + n;
}