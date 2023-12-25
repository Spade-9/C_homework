#include <stdio.h>
#include <string.h>

struct Student
{
    char name[21];
    int total;
};
struct Student Stu[101];

void init(struct Student *stu)
{
    scanf("%s", stu->name);
    scanf("%d", &(stu->total));
    getchar(); // 清理一下\n，为下一次做准备
}

int cmp(int i) // 进行结构体的比较，Stu[i]应在后，返回1
{
    // 比较总成绩，总成绩高的在前面,不交换
    if (Stu[i].total > Stu[i + 1].total)
        return 0;
    else if (Stu[i].total < Stu[i + 1].total)
        return 1;
    if (strcmp(Stu[i].name, Stu[i + 1].name) > 0)
        return 1;
    else
        return 0;
}

void print(struct Student stu)
{
    printf("Name:%s\n", stu.name);
    printf("total:%d\n\n", stu.total);
}
int main()
{
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
        init(&Stu[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (cmp(j))
            {
                struct Student tmp = Stu[j];
                Stu[j] = Stu[j + 1];
                Stu[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        print(Stu[i]);
}