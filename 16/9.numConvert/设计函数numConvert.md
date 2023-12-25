6-9 实验5_13_设计函数numConvert
分数 100
作者 scs
单位 北京邮电大学
设计函数int numConvert(int number,int n,int m)，用于将n进制的数number转化为m进制的数并返回，其中2<=n<=10，2<=m<=10。
例如将二进制数110转化为三进制时，即调用numConvert(110,2, 3)，函数返回值为20。

测试用例保证输入及返回值都在int型变量范围内。

输入与输出要求：
输入三个正整数number、n和m，三个整数的意义如题目叙述。输出转化后的结果。

函数接口定义：
int numConvert(int number,int n,int m);
其中 number、n 和 m 都是用户传入的参数，含义如题面所述。函数的返回值为转换后的结果。

裁判测试程序样例：
#include <stdio.h>

//将n进制转换为m进制 
int numConvert(int,int,int) ; 

int main()
{
    int        number , m , n ;
    
    scanf("%d%d%d",&number,&n,&m);

    printf("%d\n",numConvert(number,n,m));
    return 0 ;
}


/* 请在这里填写答案 */
输入样例一：
110 2 3

输出样例一：
20

输入样例二：
666666 9 10

输出样例二：
398580
