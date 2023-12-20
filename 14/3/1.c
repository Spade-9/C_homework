#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // 读取第一个\n
    char **str = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(100000 * sizeof(char));
        gets(str[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        // 排序，依次将最大字符串放在后面
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((strcmp(str[j], str[j + 1])) > 0)
            {
                char *tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
        free(str[i]);
    }
    free(str);
}