#include <stdio.h>

typedef struct
{
    char id[16]; // 学生账号
    int total;   // 综合成绩
    int ce;      // 机试成绩
    int ws;      // 加权成绩
} STUDENT;

void Sort(STUDENT a[], int size);
void Swap(STUDENT *s1, STUDENT *s2);
int Comp(STUDENT *s1, STUDENT *s2);

int main()
{
    STUDENT stu[100];
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d", stu[i].id, &stu[i].ce, &stu[i].ws);
        stu[i].total = stu[i].ce + stu[i].ws;
    }

    Sort(stu, n);
    for (i = 0; i < n; i++)
        printf("%s %d %d %d\n", stu[i].id, stu[i].total, stu[i].ce, stu[i].ws);

    return 0;
}

void Sort(STUDENT a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (Comp(&a[j + 1], &a[j]))
                Swap(&a[j], &a[j + 1]);
        }
    }
}