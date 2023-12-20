#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str_cmp(const void *p1, const void *p2)
{
    char *str1 = *(char **)p1;
    char *str2 = *(char **)p2;
    int x = strcmp(str1, str2);
    return x;
}
int main()
{
    int n;
    scanf("%d", &n);
    while (getchar() != '\n')
    {
        continue;
    }
    char **p = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        char slow[1005] = {0};
        gets(slow);
        int lens = strlen(slow);
        p[i] = (char *)malloc((lens + 1) * sizeof(char));
        strcpy(p[i], slow);
    }
    qsort(p, n, sizeof(char *), str_cmp);
    for (int j = 0; j < n; j++)
    {
        puts(p[j]);
    }

    for (int k = 0; k < n; k++)
    {
        free(p[k]);
    }
    free(p);
    return 0;
}