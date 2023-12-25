#include <stdio.h>
#include <string.h>
struct Student
{
    char Id[11];
    char name[11];
    int score[3];
};
struct Student Stu[131];
int cnt = 0; // 记录已录入学生个数
int flag[131] = {0};

int judge(char *tmp) // 判断该学生是否已录入,已录入，返回i，即第几个学生
{
    for (int i = 1; i <= cnt; i++)
    {
        if (!flag[i])
            continue;
        if (!strcmp(Stu[i].Id, tmp))
            return i;
    }
    return 0;
}
void init(struct Student *stu, char *tmp)
{
    if (judge(tmp))
    {
        printf("Students already exist\n");
        while (getchar() != '\n')
            ;
        cnt--;
        return;
    }
    flag[cnt] = 1;
    strcpy(stu->Id, tmp);
    scanf(" %s", stu->name);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", stu->score + i);
    }
    getchar(); // 清理一下\n，为下一次做准备
    printf("Add success\n");
}

void delet(char *tmp)
{
    getchar();
    int a;
    if (a = judge(tmp))
    {
        printf("Delete success\n");
        flag[a] = 0;
        return;
    }
    printf("Students do not exist\n");
}

void change(char *tmp)
{
    int a = judge(tmp);
    if (a)
    {
        printf("Update success\n");
        scanf("%d%d%d", &Stu[a].score[0], &Stu[a].score[1], &Stu[a].score[2]);
        return;
    }
    while (getchar() != '\n')
        ;

    printf("Students do not exist\n");
}

void print(char *tmp)
{
    int a = judge(tmp);
    if (a)
    {
        struct Student stu = Stu[a];
        printf("Student ID:%s\n", stu.Id);
        printf("Name:%s\n", stu.name);
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += stu.score[i];
        }
        double average = (double)sum / 3;
        printf("Average Score:%.1lf\n", average);
        return;
    }
    printf("Students do not exist\n");
}

int main()
{
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        // printf("\n%d\n", i); // 记得删掉
        int signal;
        char tmp[11];
        scanf("%d ", &signal);
        scanf("%s", tmp);
        switch (signal)
        {
        case 1:
            init(&Stu[++cnt], tmp);
            break;
        case 2:
            delet(tmp);
            break;
        case 3:
            change(tmp);
            break;
        case 4:
            print(tmp);
            break;
        }
        // printf("\n\n");
    }
    return 0;
}