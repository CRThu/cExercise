
// 实践七、结构体的构造与应用
// 1. 一个学生的基本信息有：学号、姓名、性别和年龄，现要存放5个同学的信息，编程实现把各项信息输出出来。 

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
    struct student s[5] = { {001,"赵",male,10},{002,"钱",female,15},{003,"孙",male,17},{004,"李",female,16},{005,"周",male,22} };
    for (int i = 0; i < 5; i++)
        printf("%lld %s %s %d\n", s[i].number, s[i].name, s[i].sex == male ? "男" : "女", s[i].age);
#endif
    system("pause");
    return 0;
}