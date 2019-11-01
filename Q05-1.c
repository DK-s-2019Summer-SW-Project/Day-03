#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num, i = 1, j = 1;
	
	while (i <= 7)
	{
		while (j <= i)
		{
			printf("%d",j);
			j++;
		}
		j = 1;
		printf("*\n",j);
		i++;
	}
	return 0;
}