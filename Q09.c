#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num, i = 0;

	printf("Insert a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
		if (num % i == 0)
		{
			printf("%d\n", i);
		}
	return 0;
}