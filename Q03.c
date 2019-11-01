#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i = 0;
	printf("the ASC code line");

	while (i <= 65)
	{
		printf("The ASC code for %d is %c\n", i,i);
		i++;
	}

	return 0;
}