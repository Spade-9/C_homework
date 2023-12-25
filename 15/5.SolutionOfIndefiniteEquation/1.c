#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int x, y, cnt = 0;
    for (x = 0; x <= c / a; x++)
    {
        for (y = 0; y <= c / b; y++)
        {
            if (x * a + y * b == c)
                cnt++;
        }
    }
    printf("%d\n", cnt);
}