
#include <stdio.h>

#define MAXLEN 110

int isPrime(int n); // 判断一个整数是否是质数，是则返回1，否则返回0
int getResult(char word[]);

int main()
{
    char word[MAXLEN];

    scanf("%s", word);
    printf("%d\n", getResult(word));

    return 0;
}

int isPrime(int n)
{
    if (n == 1)
        return 0;
    else
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return 0;
        }
    return 1;
}

int getResult(char word[])
{
    int min = 100, max = 0, flag[100] = {0};
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (flag[i])
            continue;
        int cnt = 0;
        for (int j = i; word[j] != '\0'; j++)
        {
            if (word[j] == word[i])
            {
                cnt++;
                flag[j] = 1;
            }
        }
        min = cnt < min ? cnt : min;
        max = cnt > max ? cnt : max;
    }
    int sub = max - min;
    if (isPrime(sub))
        return sub;
    else
        return -1;
}