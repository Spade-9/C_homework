#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a=m,b=n;
    while (n != 0)
    {
        int tmp = m % n;
        m = n;
        n = tmp;
    }
    printf("%d %d\n", m ,a/m*b);
    return 0;
}