
// ʵ��ʮһ���ۺ����һ
// ��̴�ӡ���е�ˮ�ɻ�������νˮ�ɻ�����ָһ��3λ�������λ���������͵��ڸ��������磺153��ˮ�ɻ�������Ϊ153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��


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