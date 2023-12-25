#include <stdio.h>

struct Student
{
    char name[21];
    char Id[21];
    int score[5];
    double average;
    int total;
};
struct Student Stu[101];

void init(struct Student *stu)
{
    gets(stu->name);
    gets(stu->Id);
    stu->total = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", stu->score + i);
        stu->total += stu->score[i];
    }
    stu->average = (double)stu->total / 5;
    getchar(); // 清理一下\n，为下一次做准备
}

void print(struct Student stu)
{
    printf("Name:%s\n", stu.name);
    printf("ID:%s\n", stu.Id);
    printf("Score:%d", stu.score[0]);
    for (int i = 1; i < 5; i++)
        printf(" %d", stu.score[i]);
    printf("\naverage:%.2lf total:%d\n\n", stu.average, stu.total);
}
int main()
{
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        init(&Stu[i]);
        print(Stu[i]);
    }
}