#include <stdio.h>
int main()
{
    int n, staff, product;
    double result[6][5] = {0}, sale;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %lf", &staff, &product, &sale);
        result[product - 1][staff - 1] += sale;
        result[product - 1][4] += sale;
        result[5][staff - 1] += sale;
        result[5][4] += sale;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%.1lf\t", result[i][j]);
        printf("%.1lf\n", result[i][4]);
    }
    return 0;
}