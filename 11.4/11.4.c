#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    char str[35][10] = {0};
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        printf("%c", str[m][0]);
        for (int j = 1; str[m][j - 1] != '\0'; j++)
            printf("%c", str[m][j]);
        printf("\n");
    }
    return 0;
}