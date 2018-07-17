
// 实践八、指针的应用
// 1. 利用指向数组的指针变量输出数组的全部元素。
// 2. 有一个长度不大于40的字符串，已知其中共包含两个字符“A”，求处于两个字符“A”中间的字符个数，及这些字符。

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <windows.h>

//#define Q1
//#define Q2

int main()
{
#ifdef Q1
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int *p = arr;
    for (int i = 0; i < 10; i++)
        printf("%d\n", *(p + i));
#endif
#ifdef Q2
    char arr[40] = { "Abcdabcd1234567AABBCC" };
    char *p = arr;
    char cut[40] = {};
    int pos = 0;
    for (; *p != '\0';)
    {
        if (*p == 'A')
        {
            cut[pos] = *p;
            if (pos != 0)
                break;
            pos++;
        }
        else
            if (pos != 0)
            {
                cut[pos] = *p;
                pos++;
            }
        p++;
    }
    // printf("%s\n", cut);
    char cutA[40] = {};
    strncpy(cutA, cut + 1, strlen(cut + 1) - strlen("A"));
    printf("len = %d, str = %s\n",strlen(cutA), cutA);
#endif
    system("pause");
    return 0;
}