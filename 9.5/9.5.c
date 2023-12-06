#include <stdio.h>
int main()
{
    // 100，50，20，10，5，2，1
    int n, tmp;
    scanf("%d", &n);
    int arr[7] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++)
    {
        tmp = n / arr[i];
        n %= arr[i];
        if (tmp != 0)
            printf("%d:%d\n", arr[i], tmp);
    }

    return 0;
}