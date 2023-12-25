6-33 实验10_8_设计函数 void delcharfun(char *str,char ch)
分数 100
作者 scs
单位 北京邮电大学
设计函数 void delcharfun(char *str,char ch)实现从字符串str中删除指定的字符ch。同一字母的大、小写按不同字符处理。

函数接口定义：
void delcharfun(char *str,char ch);
其中 str 和 ch 都是用户传入的参数。 str 为指向待删除数组的指针； ch 指定字符。函数没有返回值。

裁判测试程序样例：
#include<stdio.h>

void delcharfun(char *str,char ch);
 
int main()
{
    char    ch,str[110];
    
    scanf("%s",str);    //读入字符串 
    getchar();            //读取回车符号 
    scanf("%c",&ch);    //读入字符 
    delcharfun(str,ch);    //删除 
    printf("%s\n",str);    //输出删除后结果 
    return 0;    
}

/* 请在这里填写答案 */
输入样例：
abcABCabc#
b

输出样例：
acABCac#
