
// ʵ��ʮ�����ۺ���ƶ�
// ���ʵ���������������գ�����������ǵ���ĵڼ��졣�磺
// ���������ڣ������յĸ�ʽ����2007  1  31
// �����Ǳ���ĵ�31�졣

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