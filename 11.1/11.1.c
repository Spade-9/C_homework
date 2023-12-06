#include <stdio.h>
int main()
{
    int cnt;
    char tmp;
    while (scanf("%c", &tmp) == 1 && cnt >= 0)
    {
        if (tmp == '(')
            cnt++;
        else if (tmp == ')')
            cnt--;
    }
    if (cnt == 0)
        printf("parentheses match!\n");
    else
        printf("parentheses do not match!\n");
    return 0;
}