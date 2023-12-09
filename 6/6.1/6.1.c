#include <stdio.h>
int is_Automorphic(int num);

int main()
{
    int num, a;
    scanf("%d", &num);
    if (1 <= num && num <= 10000)
    {
        a = is_Automorphic(num);
        if (a == 1)
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("%d out of range\n", num);

    return 0;
}

int is_Automorphic(int num)
{
    int num2 = num * num;
    while ((num != 0))
    {
        if ((num % 10) != (num2 % 10))
            break;
        num /= 10;
        num2 /= 10;
    }
    if (num == 0)
        return 1;
    else
        return 0;
}