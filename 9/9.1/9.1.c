#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int score[105] = {0}, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += score[i];
    }
    printf("%.2lf\n", (double)sum / n);
    return 0;
}