#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num, i = 0, j = 0;
	printf("Insert a number: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%3d", j);
		}
		printf("\n");
	}
	return 0;
}

//정수를 입력 받는다
// 1 12 123 1234 이런 식으로 출력이 나오게 만든다.
// 중첩 반복문을 사용하여 만든다 --> 반복을 위한 변수 필요 + 정수 입력을 위한 정수가 필요 +반복을 위한 변수 설정