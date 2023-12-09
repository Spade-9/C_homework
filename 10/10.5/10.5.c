
#include <stdio.h>

// 选择排序（升序）
// 参数说明：数组，数组中已有元素个数
void selectSort(int data[], int elementCount);

// 函数功能：找数组中的最小值元素，并返回其下标
// 参数说明：数组名，查找起始位置下标，查找终止位置下标
int findMin(int data[], int startLoc, int endLoc);

// 输出数组中所有元素
// 参数说明：数组，数组中已有元素个数
void outputData(int data[], int elementCount);

int main()
{
    int n, i, num[1010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    selectSort(num, n);
    return 0;
}
void selectSort(int data[], int elementCount)
{
    for (int i = 0; i < elementCount - 1; i++)
    {
        int flag = i;
        int min = data[i];
        for (int j = i; j < elementCount; j++)
        {
            if (min > data[j])
            {
                min = data[j];
                flag = j;
            }
        }
        data[flag] = data[i];
        data[i] = min;
        outputData(data, elementCount);
    }
}

// int findMin(int data[], int startLoc, int endLoc);

void outputData(int data[], int elementCount)
{
    printf("%d", data[0]);
    for (int i = 1; i < elementCount; i++)
        printf(" %d", data[i]);
    printf("\n");
}
