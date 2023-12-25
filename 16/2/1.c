#include <stdio.h>

int getString(char *source, char *strPtr[]);

int main()
{
    char str[100005];
    char *strPtr[1005] = {0};
    int i, num;

    gets(str);
    num = getString(str, strPtr);
    for (i = 0; i < num; i++)
        puts(strPtr[i]);

    return 0;
}

int getString(char *source, char *strPtr[])
{
    int cnt = 0, i = 0;
    while (*(source + i) == ' ')
        i++;
    strPtr[cnt++] = source + i;
    for (; *(source + i) != '\0'; i++)
    {
        if (*(source + i) == ' ')
        {
            *(source + i) = '\0';
            while (*(source + i + 1) == ' ')
                i++;
            if (*(source + i + 1) != '\0')
                strPtr[cnt++] = source + i + 1;
        }
    }
    return cnt;
}