#include <stdio.h>
#include <stdlib.h>

int *create(int n);
void cal(int *array, int size);

int main()
{
    int *array, n, i;

    scanf("%d", &n);

    array = create(n);
    if (array == NULL)
        return -1; // 这里的return是因为没有获得内存而直接结束程序。

    cal(array, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", *(array + i));
        if (i == n - 1)
            printf("\n");
        else
            printf(" ");
    }

    free(array);

    return 0;
}

int *create(int n)
{
    int *p = (int *)malloc(sizeof(int) * n);
    return p;
}

void cal(int *array, int size)
{
    scanf("%d", array);
    float sum = *array, average;
    int min = *array, max = *array;
    for (int i = 1; i < size; i++)
    {
        scanf("%d", array + i);
        sum += *(array + i);
        min = array[i] < min ? array[i] : min;
        max = array[i] > max ? array[i] : max;
    }
    average = sum / size;
    printf("%.0f\n%.2f\n%d\n%d\n", sum, average, max, min);
}