#include <stdio.h>
int main()
{
    int arr[1005], n, flag = 1, len = 1, max = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        switch (flag)
        {
        case 1:
            if (arr[i] == arr[i + 1])
                len++;
            else
            {
                flag = 0;
                max = max < len ? len : max;
            }
            break;
        case 0:
            if (arr[i] == arr[i + 1])
            {
                flag = 1;
                len = 2;
            }
            break;
        }
    }
    max = max < len ? len : max;
    printf("%d\n", max);
    return 0;
}