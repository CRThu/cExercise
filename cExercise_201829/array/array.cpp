
// ʵ���塢����Ĺ�����Ӧ��
// 1. һ������30��ͬѧ��ͨ����������ɼ�������ӡ�����ÿ�����10��ͬѧ�ĳɼ���              
// 2. ���Ѿ��ź���ĳɼ�����������²�������һ���³ɼ�����˳����뵽����ĺ���λ�á�����ߣ���

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