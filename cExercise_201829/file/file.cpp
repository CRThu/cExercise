
// ʵ���š��ļ��Ĵ򿪣��رգ��޸�
// 1. �Ӽ����Ͻ����ַ�д���ļ���ȥ��Ȼ����رա�              
// 2. ���ļ��ж�ȡ�ַ�����ͨ����ʾ����ʾ������Ȼ����رա�

#include <stdio.h>
#include <stdint.h>
#include <windows.h>

//#define Q1
//#define Q2

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
    char key[200] = {};
    FILE *fp = fopen("keyboard.txt", "w+");
    getline(key, 200);
    fprintf(fp, key);
    printf("write to keyboard.txt success.\n");
    fclose(fp);
#endif
#ifdef Q2
    char key[200] = {};
    FILE *fp = fopen("./keyboard.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%s", key);
        printf(key);
        printf("\nread from keyboard.txt success.\n");
        fclose(fp);
    }
    else
        printf("read from keyboard.txt failed.\n");
#endif
    system("pause");
    return 0;
}