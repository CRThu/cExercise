
// ʵ���ߡ��ṹ��Ĺ�����Ӧ��
// 1. һ��ѧ���Ļ�����Ϣ�У�ѧ�š��������Ա�����䣬��Ҫ���5��ͬѧ����Ϣ�����ʵ�ְѸ�����Ϣ��������� 

#include <stdio.h>
#include <stdint.h>
#include <windows.h>

#define Q1

enum sex { male, female };

struct student
{
    uint64_t number;
    char name[50];
    int sex;
    int age;
};

int main()
{
#ifdef Q1
    struct student s[5] = { {001,"��",male,10},{002,"Ǯ",female,15},{003,"��",male,17},{004,"��",female,16},{005,"��",male,22} };
    for (int i = 0; i < 5; i++)
        printf("%lld %s %s %d\n", s[i].number, s[i].name, s[i].sex == male ? "��" : "Ů", s[i].age);
#endif
    system("pause");
    return 0;
}