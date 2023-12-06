#include <stdio.h>

int reverseNum(int);

int main()
{
    int num;

    scanf("%d", &num);
    printf("The reverse form of number %d is %d.\n", num, reverseNum(num));

    return 0;
}

int reverseNum(int n)
{
    int result = 0;
    while (n != 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}