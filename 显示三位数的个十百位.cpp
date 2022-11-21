#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <iostream>
int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;
	printf("请输入一个三位数\n");
	scanf("%d", &x);
	printf("这个三位数的个位是%d\n", x % 10);
	y = x-(x % 10)-(x/100*100); 
	printf("这个三位数的十位是%d\n", y/10);
    printf("这个三位数的百位是%d\n", x / 100);
}