
// 实践四、循环结构程序设计

// 1. 编程求1 + 2 + 3 + ··· + 100的和。
// 2. 求1到100之间的奇数之和，偶数之和
// 3. 把输入的一行字符原样输出，若是大写字母需要转换成小写的。

#include <stdio.h>
#include <math.h>
#include <windows.h>

//#define Q1
//#define Q2
//#define Q3

int getline(char* line, int max_size)
{
    int c;
    int len = 0;
    while ((c = getchar()) != EOF && len < max_size)
    {
        line[len++] = c;
        if ('\n' == c)
            break;
    }
    line[len] = '\0';
    return len;
}

int main()
{
#ifdef Q1
    int sum = 0;
    for (int i = 1; i <= 100; i++)
        sum += i;
    printf("out = %d\n", sum);
#endif
#ifdef Q2
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++)
        if (i % 2)
            sum1 += i;
        else
            sum2 += i;
    printf("out = %d,%d\n", sum1, sum2);
#endif
#ifdef Q3
    char s[100];
    //scanf("%s",&s);
    getline(s, 100);
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A'&&s[i] <= 'Z')
            s[i] += 32;
    printf("%s\n", s);
#endif
    system("pause");
    return 0;
}