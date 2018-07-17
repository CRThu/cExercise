
// 实践二、C语言基本数据类型的输入、输出
// 1. 求三个整数的和   
// 2. 把输入的大写字母转换为小写字母
// 3. 求一元二次方程的根

#include <stdio.h>
#include <math.h>
#include <windows.h>

//#define Q1
//#define Q2
//#define Q3

int main()
{
#ifdef Q1
    int i1, i2, i3;
    printf("in = ");
    scanf("%d %d %d", &i1, &i2, &i3);
    printf("out = %d\n", i1 + i2 + i3);
#endif
#ifdef Q2
    char c;
    printf("in = ");
    scanf("%c", &c);
    printf("out = %c\n", c + 32);
#endif
#ifdef Q3
    double a, b, c;
    printf("in = ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = b*b - 4 * a*c;
    printf("out = %lf, %lf\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
#endif
    system("pause");
    return 0;
}