#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, i = 0;
	printf("Insert a number that you want to repeat: ");
	scanf_s("%d", &a);

	while (i<=a)
	{
		printf("Hello world!\n");
			i++;
	}

	return 0;
}