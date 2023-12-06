#include <stdio.h>
#include <string.h>
int main()
{
    char num[15];
    scanf("%s", num);
    int n = strlen(num), flag = 0;
    for (int i = 0; i < n - i - 1; i++)
    {
        if (num[i] != num[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}