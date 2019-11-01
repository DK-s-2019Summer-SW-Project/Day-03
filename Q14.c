// n의 값을 입력 받고 1에서 n까지의 제곱의 값을 더한다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a, total = 0, i = 0;

	printf("insert a number: ");
	scanf_s("%d", &a);

	for (i = 1; i <= a; i++)
	{
		total += i*i;
	}
	printf("The result is %d\n", total);

	return 0;
}

//n의 값을 입력 받는다
// 루프를 돌린다
// 변수는 입력 받는 값, 총합, 루프를 돌리기 위한 값