#include <stdio.h>

int fun(int);

int main()
{
    int x;

    scanf("%d", &x);
    printf("The result is:y=%d\n", fun(x));

    return 0;
}
// 当x<1时，y=x；当1<=x<=10时，y=2x-1；当10< x <=100时，y=3x-11；当x>100时，y=x*x-24
int fun(int x)
{
    int y;
    if (x < 1)
        y = x;
    else if (1 <= x && x <= 10)
        y = 2 * x - 1;
    else if (10 < x && x <= 100)
        y = 3 * x - 11;
    else
        y = x * x - 24;
    return y;
}