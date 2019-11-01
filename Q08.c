#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num1, num2, total = 0;
	printf("Insert number: ");
	scanf("%d %d", &num1, &num2);
	printf("starting numbe is %d end number is%d\n", num1, num2);

	for (num1 = 1; num1 <= num2; num1++)
	{
		total += num1;
	}
	printf("sum of %d to %d is %d\n", num1, num2, total);
	return 0;
}