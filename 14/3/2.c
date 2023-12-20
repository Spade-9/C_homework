// 要求：不允许定义如char str[100][100000];这样的二维数组，因为会极大的浪费内存空间。
// 你应定义char str[100000];这样的存储空间，将n个字符串连续的存储在一维字符空间内，
// 然后将这n个字符串的起始位置保存在字符指针数组中，再进行排序操作。

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000] = {0}, *p[100] = {NULL};
    int n, len = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        p[i] = str + len;
        gets(p[i]);
        len += strlen(p[i]) + 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                char *tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%s\n", p[i]);

    return 0;
}