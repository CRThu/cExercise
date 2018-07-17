
// 实践十二、综合设计二
// 编程实现任意输入年月日，计算出该天是当年的第几天。如：
// 请输入日期（年月日的格式）：2007  1  31
// 该天是本年的第31天。

#include <stdio.h>
#include <windows.h>

#define Q1

int main()
{
#ifdef Q1
    int y, m, d;
    int days = 0;
    printf("in = ");
    scanf("%d %d %d", &y, &m, &d);
    switch (m)
    {
    case 12:
        days += 30; // 11
    case 11:
        days += 31; // 10
    case 10:
        days += 30; // 9
    case 9:
        days += 31; // 8
    case 8:
        days += 31; // 7
    case 7:
        days += 30; // 6
    case 6:
        days += 31; // 5
    case 5:
        days += 30; // 4
    case 4:
        days += 31; // 3
    case 3:
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            days += 29; // 2
        else
            days += 28; // 2
    case 2:
        days += 31; // 1
    case 1:
        days += 0;
    default:
        break;
    }
    days += d;
    printf("days = %d\n", days);
#endif
    system("pause");
    return 0;
}