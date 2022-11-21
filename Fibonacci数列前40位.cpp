#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <stdio.h>
int main()
{
	int i = 3;
	int v[40];
	v[1] = 1;
	v[2] = 1;
	for (i = 3; i <= 40; i++)
		v[i] = v[i - 1] + v[i - 2];
	for (i = 1; i <= 40; i++)
		printf("v[%d]=%d\n", i, v[i]);
		return(0);
}
