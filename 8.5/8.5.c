#include <stdio.h>

int findMax(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", findMax(n));

    return 0;
}

int findMax(int n)
{
    int num;
    scanf("%d", &num);
    if (n == 1)
        return num;
    else
    {
        int a = findMax(n - 1);
        return ((num > a) ? num : a);
    }
}
