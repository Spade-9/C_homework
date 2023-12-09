#include <stdio.h>
int main()
{
    int n, a[15], b, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b);
        tmp = a[i];
        a[i] = a[b];
        a[b] = tmp;
    }
    printf("%d", a[0]);
    for (int i = 1; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}