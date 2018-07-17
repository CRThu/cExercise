
// 实践五、数组的构造与应用
// 1. 一个班有30个同学，通过键盘输入成绩，并打印输出，每行输出10个同学的成绩。              
// 2. 对已经排好序的成绩数组进行以下操作：把一个新成绩按照顺序插入到数组的合适位置。（提高）。

#include <stdio.h>
#include <math.h>
#include <windows.h>

#define Q1
#define Q2
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int main()
{
#ifdef Q1
    int score[30];
    for (int i = 0; i < 30; i++)
        scanf("%d", &score[i]);
    for (int i = 0; i < 30; i++)
    {
        if (i % 10 != 0)
            printf(" ");
        printf("%d", score[i]);
        if (i % 10 == 9)
            printf("\n");
    }
#endif
#ifdef Q2
    qsort(score, 30, sizeof(int), cmp);
    for (int i = 0; i < 30; i++)
    {
        if (i != 0)
            printf(" ");
        else
            printf("original = ");
        printf("%d", score[i]);
    }
    int in;
    printf("\nin = ");
    scanf("%d", &in);
    for(int i=0;i<30;i++)
        if (score[i] >= in)
        {
            for (int j = 0; j < i; j++)
            {
                if (j != 0)
                    printf(" ");
                else
                    printf("out = ");
                printf("%d", score[j]);
            }
            printf(" %d", in);
            for (int j = i; j < 30; j++)
            {
                    printf(" ");
                printf("%d", score[j]);
            }
            break;
        }
    printf("\n");
#endif
    system("pause");
    return 0;
}