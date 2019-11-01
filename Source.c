#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, b;
	printf("insert : ");
	scanf_s("%d %d", &a, &b);

	printf("%d", a*a + b*b);

	return 0;
}