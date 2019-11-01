// 1~100의 수 중에서 3의 배수를 출력 하시오
// for문을 활용하여 사용해보자. 
// 먼저 1~100까지의 범위를 만든다. 그리고 그 안에서 3의 배수를 출력하는 값을 집어 넣는다.

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int i;

	for (i = 0; i <= 100; i++)
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	return 0;
}