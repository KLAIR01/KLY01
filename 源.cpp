#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*printf,scanf,puts,if else,switch case default,����*/
int main(int argc, char** argv)
{
    int a;
    int b;
    int score;
    //printf����֧�ָ�ʽ����Ǹ�ʽ�����//
    printf("����ϲ��С��\n");
    //���ǷǸ�ʽ�����������ԭ�������˫��������Ϊ�ַ�������//
    printf("�������С��˵%d\n", 52 * 10);
    //���Ǹ�ʽ�������˫��������Ϊ��ʽ���ַ�����%dΪת��˵��//
    puts("KK�н�񱣬ɾ��С����QQ");
    //puts����ֻ�ܷǸ�ʽ��������Զ�����//
    printf("����666���ܼ���:\n");
    scanf("%d", &a);
    //scanf����ֻ�ܸ�ʽ������//
    printf("%d\n", a);
    if (a == 666)
        puts("KK��м\a");
    //�š���\nΪ���з���\aΪ���壬�ȶ���ת���ַ�//
    else puts("KK���ǲ�м\a");
    //if������ʽ��������,�б�Ҫ��������������������Ǿ�Ҫ�ô�������//
    puts("�������˼�ģ�����С�������");
    puts("�򵥵㣬0����ok��1����ok");
    scanf("%d", &b);
    switch (b * 1) {
    case 0: puts("���ڷ�ƨ");                           break;
    case 1: puts("Ҳ���а�");                           break;
    default: puts("����������0��1���������˻���sb��");   break;
    }
    puts("���²��Ҹ�С������");
    do {
        puts("��1��10�Լ���");
        scanf("%d", &score);
        if (score <= 6)
            puts("��ô���أ�");
        else if (score >= 8)
            puts("��Ȼ�������ѽ�����ֲ�����");
        else if (score = 7)
            puts("������������");
    } while (score != 7);
    //��ķ�������ģ����ʽҪ����һ��ߣ�������ȷ��Ҳ�ÿ�//
    while (a-- > 0) {


        printf("%d\n", a);
    }


    return 0;
}