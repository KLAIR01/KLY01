#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <iostream>
int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;
	printf("������һ����λ��\n");
	scanf("%d", &x);
	printf("�����λ���ĸ�λ��%d\n", x % 10);
	y = x-(x % 10)-(x/100*100); 
	printf("�����λ����ʮλ��%d\n", y/10);
    printf("�����λ���İ�λ��%d\n", x / 100);
}