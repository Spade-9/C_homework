#include <stdio.h>
#include <math.h>
int main()
{
    double x, result = 0, f = 1;
    scanf("%lf", &x);
    for (int i = 1; fabs(f) >= 1e-8; i++)
    {
        result += f;
        f = f * x / i;
    }
    printf("%.4lf", result);
    return 0;
}