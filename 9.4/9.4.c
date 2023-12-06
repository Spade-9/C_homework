#include <stdio.h>
int main()
{
    int n, num1[15], num2[15], result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", num1 + i);
    for (int i = 0; i < n; i++)
        scanf("%d", num2 + i);
    for (int i = 0; i < n; i++)
        result += num1[i] * num2[i];
    printf("%d", result);

    return 0;
}