#include <stdio.h>

struct Student
{
    char name[21];
    char Id[21];
    int score[5];
    double average;
    int total;
};

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

void sort(struct Student *stu)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (stu->score[j] < stu->score[j + 1])
            {
                int tmp = stu->score[j];
                stu->score[j] = stu->score[j + 1];
                stu->score[j + 1] = tmp;
            }
        }
    }
}

void print(struct Student stu)
{
    printf("Name:%s\n", stu.name);
    printf("ID:%s\n", stu.Id);
    printf("Score:%d", stu.score[0]);
    for (int i = 1; i < 5; i++)
        printf(" %d", stu.score[i]);
    printf("\naverage:%.2lf total:%d\n", stu.average, stu.total);
}
int main()
{
    struct Student stu;
    init(&stu);
    sort(&stu);
    print(stu);
}