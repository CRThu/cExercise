
// 实践三、分支结构程序设计

// 1. 任意输入一个年份，判断是否是闰年。
// 2. 输入三角形的三边长，求三角形的面积。

#include <stdio.h>
#include <math.h>
#include <windows.h>

//#define Q1
//#define Q2

int main()
{
#ifdef Q1
    int year;
    printf("in = ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("is lead year!\n");
    else
        printf("is not lead year!\n");
#endif
#ifdef Q2
    double a, b, c;
    printf("in = ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double s = (a + b + c) / 2;
    printf("out = %lf\n", sqrt(s*(s - a)*(s - b)*(s - c)));
#endif
    system("pause");
    return 0;
}