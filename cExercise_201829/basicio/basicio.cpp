
// ʵ������C���Ի����������͵����롢���
// 1. �����������ĺ�   
// 2. ������Ĵ�д��ĸת��ΪСд��ĸ
// 3. ��һԪ���η��̵ĸ�

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