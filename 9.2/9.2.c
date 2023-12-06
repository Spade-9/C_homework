#include <stdio.h>
int main()
{
    int n, m, arr[1005] = {0}, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tmp);
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == tmp)
            {
                if (j - 1 >= 0)
                    printf("%d", arr[j - 1]);
                if (j - 1 >= 0 && j + 1 < n)
                    printf(" ");
                if (j + 1 < n)
                    printf("%d", arr[j + 1]);
                if (j - 1 < 0 && j + 1 >= n)
                    printf("NULL");
                printf("\n");
                break;
            }
            if (j == n - 1)
                printf("NULL\n");
        }
    }

    return 0;
}