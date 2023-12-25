#include <stdio.h>

void delcharfun(char *str, char ch);

int main()
{
    char ch, str[110];

    scanf("%s", str);    // 读入字符串
    getchar();           // 读取回车符号
    scanf("%c", &ch);    // 读入字符
    delcharfun(str, ch); // 删除
    printf("%s\n", str); // 输出删除后结果
    return 0;
}

void delcharfun(char *str, char ch)
{
    char tmp[110] = {0};
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            continue;
        tmp[cnt++] = str[i];
    }
    for (int i = 0; i <= cnt; i++)
    {
        str[i] = tmp[i];
    }
}