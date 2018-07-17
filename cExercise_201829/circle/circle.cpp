// 实践一、CODEBLOCKS环境使用
// 任给一半径, 输出圆的周长

#include <stdio.h>
#include <windows.h>

#define pi 3.14159

int main()
{
    double r;
    printf("R = ");
    scanf("%lf", &r);
    printf("C = %lf\n", 2 * pi * r);
    system("pause");
    return 0;
}