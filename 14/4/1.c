#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char **str = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        char tmp[1000] = {0};
        gets(tmp);
        int len = strlen(tmp);
        str[i] = (char *)malloc((len + 1) * sizeof(char)); // len+1 为什么？？？
        strcpy(str[i], tmp);
    }
    for (int i = 0; i < n - 1; i++)
    {
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