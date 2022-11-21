#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	puts("¾Å¾Å³Ë·¨¿Ú¾÷");
	for (a=1; a <= 9; a++) 
	{
		for (b=1; b <= a; b++) 
		{
			printf("%d*%d=%2d ",a,b,a * b);
		}
		printf("\n");
	}
	return 0;
}