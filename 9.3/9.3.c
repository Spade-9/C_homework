#include <stdio.h>
int main()
{
    int n, arr[205], arr1[200], arr2[200], tmp, count1 = 0, count2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp % 2 == 0)
        {
            arr2[count2] = tmp;
            count2++;
        }
        else
        {
            arr1[count1] = tmp;
            count1++;
        }
    }
    if (count2 > 0)
        printf("%d", arr2[0]);
    for (int i = 1; i < count2; i++)
    {
        printf(" %d", arr2[i]);
    }
    if (count2 > 0 && count1 > 0)
        printf(" %d", arr1[0]);
    if (count2 == 0)
        printf("%d", arr1[0]);
    for (int i = 1; i < count1; i++)
    {
        printf(" %d", arr1[i]);
    }
    printf("\n");
    return 0;
}