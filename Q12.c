// 사용자로 부터 1부터 50까지의 숫자 10개를 입력 받아서 그 숫자 만큼의 별표를 출력

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int insert, i = 0, repeat = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("insert a data:");
		scanf_s("%d", &insert);
		for (repeat = 1; repeat <= insert; repeat++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

// 숫자를 입력 받는다, 그러나 범위는 50이하 --> 50을 초과한 값을 입력 받는 경우 재 입력을 요구 할 것
// 그냥 이걸 10번 반복 하면 될듯.
// 숫자를 입력 받는 변수 1개, 별을 출력하기 위한 변수 1개, 반복을 위한 변수 1개