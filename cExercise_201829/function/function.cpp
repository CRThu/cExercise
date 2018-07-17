
// ʵ������������Ӧ��
// 1. ��д���¹��ܺ���
// ��1�����������ĺ�
// ��2�����������Ĳ�
// ��3�����������Ļ�
// ��4��������������
// 2. �õݹ鷨����n!(ͨ�������ĵݹ���ü���׳ˣ�

#include <stdio.h>
#include <stdint.h>
#include <windows.h>

//#define Q1
//#define Q2

double add(double a, double b)
{
    return a + b;
}
double minus(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}

uint64_t recursion(int n)
{
    if (n == 1)
        return 1;
    return n*recursion(n - 1);
}


int main()
{
#ifdef Q1
    double a, b, out;
    char symbol;
    printf("in = ");
    scanf("%lf%c%lf", &a, &symbol, &b);
    switch (symbol)
    {
    case '+':
        out = add(a, b);
        break;
    case '-':
        out = minus(a, b);
        break;
    case '*':
        out = multiply(a, b);
        break;
    case '/':
        out = divide(a, b);
        break;
    default:
        break;
    }
    printf("out = %lf\n", out);
#endif
#ifdef Q2
    int in;
    printf("in = ");
    scanf("%d", &in);
    printf("out = %lld", recursion(in));
#endif
    system("pause");
    return 0;
}