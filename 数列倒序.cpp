#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <stdio.h>
int main()
{
	int k;
	int v[10];
	int b[10];
	for (k = 0;k < 10; k++)
		v[k] = k;
	for (k = 0; k < 10; k++)
		b[k] = v[9 - k];
	for (k = 0; k < 10; k++)
		printf("v[%d]=%d,b[%d]=%d\n", k, v[k], k, b[k]);

	return(0);
}
