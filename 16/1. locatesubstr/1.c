#include <stdio.h>
#include <string.h>

char *locatesubstr(char *str1, char *str2);
int main()
{
    char str1[505], str2[505];
    char *p;
    gets(str1);
    gets(str2);
    p = locatesubstr(str1, str2);

    if (p == NULL)
        printf("NULL!\n");
    else
        puts(p);

    return 0;
}

char *locatesubstr(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char *p = NULL;
    int flag = 1;
    for (int i = 0; i < len1 - len2 + 1 && flag; i++)
    {
        if (*(str1 + i) == *(str2))
        {
            p = str1 + i;
            flag = 0;
            for (int j = 1; j < len2; j++)
            {
                if (*(p + j) != *(str2 + j))
                {
                    p = NULL;
                    flag = 1;
                    break;
                }
            }
        }
    }
    return p;
}