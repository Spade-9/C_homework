
#include <stdio.h>
int main()
{
    // 站5人一排，多出1人；站6人一排，多出5人站；7人一排，多出6人；站11人一排，多出10人。
    int n;
    scanf("%d", &n);
    for (;; n++)
    {
        if ((n % 5 == 1) && (n % 6 == 5) && (n % 7 == 6) && (n % 11 == 10))
            break;
    }
    printf("%d", n);
    return 0;
}