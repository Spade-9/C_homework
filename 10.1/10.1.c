#include <stdio.h>

void bubbleSort(int a[], int n);

// 输出数组中所有元素
void outputData(int data[], int elementCount);

int main()
{
    int n, i, num[10010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    bubbleSort(num, n);
    outputData(num, n);
    return 0;
}

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

void outputData(int data[], int elementCount)
{
    printf("%d", data[0]);
    for (int i = 1; i < elementCount; i++)
        printf(" %d", data[i]);

    printf("\n");
}