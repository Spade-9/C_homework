#include <stdio.h>
int main()
{
    int a[1005], b[1005], i, j, tmp, flag = 0, m, I, J;
    for (i = 0; tmp != -1; i++)
    {
        scanf("%d", &tmp);
        a[i] = tmp;
    }
    tmp = 0;
    for (j = 0; tmp != -1; j++)
    {
        scanf("%d", &tmp);
        b[j] = tmp;
    }
    for (m = 0; flag == 0 && a[m - 1] != -1; m++)
    {
        if (b[0] == a[m])
        {
            if (j > i - m)
                break;
            flag = 1;
            for (I = m + 1, J = 1; b[J] != -1; I++, J++)
            {
                if (a[I] != b[J])
                    flag = 0;
            }
        }
    }
    if (flag)
        printf("ListB is the sub sequence of ListA.\n");
    else
        printf("ListB is not the sub sequence of ListA.\n");
    return 0;
}