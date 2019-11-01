// 1~100까지의 자연수 중에서 3의 배수이면서 동시에 5의 배수인 숫자를 출력해보자

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	int i;
	for (i = 1; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}


	return 0;
}