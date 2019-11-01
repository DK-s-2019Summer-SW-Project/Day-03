#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 1, i,total = 0;// 왜 num = 1이 되어야 하는가?
	
	while (num != 0) // 여기 질문 왜 num = !0이 아닌가? --> 대입 연산자의 우선순위 때문에!! = 이 먼저 나오면 안된다!!
	{
		printf("Insert a number: ");
		scanf_s("%d", &num);
		total += num;
	}

	printf("The result is %d\n", total);

	return 0;
}