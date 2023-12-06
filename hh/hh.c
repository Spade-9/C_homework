#include <stdio.h>
int search(int a[], int size, int target)
{
    int left = 0;
    int right = size;
    while (left < right)
    {
        int middle = left + ((right - left) / 2);
        if (a[middle] < target)
        {
            left = middle + 1;
        }
        else if (target < a[middle])
        {
            right = middle;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}

int main()
{
    int a[50], size = 0;
    for (int i = 0; a[i - 1] != -1; i++)
    {
        scanf("%d", &a[i]);
        size++;
    }
    int target;
    scanf("%d", &target);

    printf("%d\n", search(a, size - 1, target));
    return 0;
}