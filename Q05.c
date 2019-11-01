//다음과 같은 출력을 생성하는 프로그램을 작성해 보자
//1*****
//12****
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num, i = 0, j = 0, k = 0;
	

	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		for (k = 7; k > i; k--)// 이 범위에서 k>1 이 아니라 k>i이다. 이거 질문.
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}

// 글자와 숫자를 동시에 출력하는 알고리즘이 필요
// 또한 for문을 2번 중첩해야 하므로 변수 최수 2개 필요
// 반복의 범위는 7
// 숫자는 원래 순서로 출력하고, 글자는 역순으로 프로그램 하면 될듯