
// 实践十一、综合设计一
// 编程打印所有的水仙花数，所谓水仙花数是指一个3位数，其各位数字立方和等于该数本身。如：153是水仙花数，因为153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。


#include <stdio.h>
#include <math.h>
#include <windows.h>

#define Q1

int main()
{
#ifdef Q1
    for (int i = 100; i <= 999; i++)
    {
        if ((int)(pow(i / 100, 3) + pow((i % 100) / 10, 3) + pow(i % 10, 3)) == i)
        {
            printf("%d\n", i);
        }
    }
#endif
    system("pause");
    return 0;
}