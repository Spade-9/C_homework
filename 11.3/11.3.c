#include <stdio.h>
int main()
{
    int cnt1[26] = {0}, cnt2[26] = {0};
    char tmp;
    while (scanf("%c", &tmp) == 1)
    {
        if (tmp >= 'A' && tmp <= 'Z')
            cnt1[tmp - 'A']++;
        else if (tmp >= 'a' && tmp <= 'z')
            cnt2[tmp - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt1[i] > 0)
            printf("The character %c has presented %d times.\n", 'A' + i, cnt1[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt2[i] > 0)
            printf("The character %c has presented %d times.\n", 'a' + i, cnt2[i]);
    }
    return 0;
}