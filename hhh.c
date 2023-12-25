#include <windows.h> //使用windows平台的API功能
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define PI 3.14159265359
#define T px + scale *r *cosf(theta), py + scale *r *sinf(theta)
// scale比例尺  r代表极径，theta代表极角 cosf(theta)代，sinf (theta)代表C语言的数学函数，表示余弦值和正弦值
float sx, sy; // 代表初始坐标x,y
float distance(float px, float py, float r)
{
    float dx = px - sx, dy = py - sy;
    return sqrtf(dx * dx + dy * dy) - r;
} // 计算点(px,py)到圆心(sx,sy)的距离
float my_min(float d1, float d2)
{
    if (d1 < d2)
    {
        return d1;
    }
    else
    {
        return d2;
    }

} // 返回两个数中较小的一个
/*初始化变量d=0,用于存储距离值。
使用循环遍历半径 r从0开始递增直到0.8步长为 0.02,在每个半径上计算当前点到圆心的距离减去半径的值,并通过my_min函数选择更小的距离值更新到变量d中。
如果n大于0，表示还有更深层次的形状需要计算。
使用循环遍历变量t，从-1开始,每次增加2，直到1。这样可以在当前角度theta的基础上分别增加和减少1.8。
在每个角度tt上,初始化缩放比例ss为当前缩放比例scale的0.9倍。
使用循环遍历半径r，从0.2开始递增，直到0.8，步长为0.1。在每个半径上，递归调用函数f传入新的点坐标T、新的角度tt、缩放比例的一半ss*0.5f，以及层数减1的值n-1。
将返回的距离值通过my_min函数选择更小的距离值更新到变量d中。然后将缩放比例 ss 更新为当前的 0.8 倍。
返回最终的距离值d。*/
float f(float px, float py, float theta, float scale, int n)
{
    float d = 0.0f; // 0.0f代表浮点数
    for (float r = 0.0f; r < 0.8f; r += 0.02f)
        d = my_min(d, distance(T, 0.05f * scale * (0.95f - r)));
    if (n > 0)
        for (int t = -1; t <= 1; t += 2)
        {
            float tt = theta + t * 1.8f;
            float ss = scale * 0.9f;
            for (float r = 0.2f; r < 0.8f; r += 0.1f)
            {
                d = my_min(d, f(T, tt, ss * 0.5f, n - 1));
                ss *= 0.8f;
            }
        }
    return d;
}
// 递归，用来计算形状距离函数
int ribbon()
{
    float x = (fmodf(sy, 0.1f) / 0.1f - 0.5f) * 0.5f;
    return sx >= x - 0.05f && sx <= x + 0.05f;
} /*首先，将全局变量 sy 对 0.1f 取余数，并除以 0.1f。这将把 sy 的值映射到一个范围在 0 到 1 之间的小数。
 接下来，将得到的小数减去 0.5f，然后再乘以 0.5f，得到 x 的值。这一步的目的是将 sy 的范围映射到 -0.25f 到 0.25f 之间。
 最后，函数返回一个条件表达式的结果。条件表达式检查全局变量 sx 是否在 x-0.05f 和 x+0.05f 的范围内。
 如果 sx 在该范围内，则返回值为真（1），否则返回值为假（0）。*/
// 判断是否位于彩带区域
int main(int argc, char *argv[])          // argc代表一个整数是命令行参数的数量，包括程序本身
{                                         // argv是一个字符指针数组，其中每个元素都是一个命令行参数的字符串。argv[0]储存程序名称，argv[1]储存第一个命令行参数，argv[argc]值为NULL，用于标识参数数组的结束
    int n = argc > 1 ? atoi(argv[1]) : 3; // 命令行参数解析设置形状层数
    // 如果条件 argc > 1 为真，则执行 atoi(argv[1])，将 argv[1] 的字符串转换为整数值，并将结果赋给变量 n。
    // 如果条件 argc > 1 为假，则将默认值 3 赋给变量 n。
    float zoom = argc > 2 ? atof(argv[2]) : 1.0f; // 命令行参数解析，设置缩放比例
    // 如果条件 argc > 2 为真，则执行 atof(argv[2])，将 argv[2] 的字符串转换为浮点数值，并将结果赋给变量 zoom。
    // 如果条件 argc > 2 为假，则将默认值 1.0f 赋给变量 zoom。
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // 获取控制台句柄
    for (sy = 0.8f; sy > 0.0f; sy -= 0.02f / zoom, putchar('\n'))
    {
        for (sx = -0.35f; sx < 0.35f; sx += 0.01f / zoom)
        {
            if (f(0, 0, PI * 0.5f, 1.0f, n) < 0.0f)
            {
                if (sy < 0.1f)
                {
                    putchar('.');
                }
                else
                {
                    if (ribbon())
                    {
                        // 设置文本颜色为绿色
                        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
                        putchar('=');
                    }
                    else
                    {
                        if ((rand() % 3) == 0)
                        {
                            // 设置文本颜色为白色
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            putchar("............................@y%u"[rand() % 32]);
                        }
                        else
                        {
                            // 设置文本颜色为蓝色
                            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                            putchar("............................@y%u"[rand() % 32]);
                        }
                    }
                }
            }
            else
            {
                putchar(' ');
            }

            // 恢复默认文本颜色
            SetConsoleTextAttribute(hConsole, 7);
        }
    }
    Sleep(1000); // 程序进行休眠1000ms
    // 使用sleep函数来达到图案可以在控制台上停留一段时间
    printf("\n\n\n");
    for (size_t i = 0; i < 40; i++) // 打印40个空格
    {
        putchar(' ');
    } // 接下来，使用两个循环分别打印40个空格。这样做的目的是在控制台输出中创建一定的水平间隔，从而在视觉上对前后两个动画进行分隔。
    // 每个空格由 putchar(' ') 打印一个空格字符 ' ' 实现。
    Sleep(500);                     // 休眠500ms
    for (size_t i = 0; i < 40; i++) // 打印40空格
    {
        putchar(' ');
    }

    printf(".\n");
    Sleep(500);                     // 休眠500ms
    for (size_t i = 0; i < 40; i++) // 打印40空格
    {
        putchar(' ');
    }
    printf("圣诞快乐！\n");
    system("pause"); // 结束程序执行
    return 0;
}