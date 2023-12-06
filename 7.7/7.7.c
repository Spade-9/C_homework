#include <stdio.h>
#include <math.h>
int main()
{
    int n, result = 0;
    scanf("%d", &n);
    for (int i = 0; n != 0; i++)
    {
        result += n % 10 * pow(2, i);
        n /= 10;
    }
    printf("%d", result);

    return 0;
}