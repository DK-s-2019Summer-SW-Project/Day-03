#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 1, i,total = 0;// �� num = 1�� �Ǿ�� �ϴ°�?
	
	while (num != 0) // ���� ���� �� num = !0�� �ƴѰ�? --> ���� �������� �켱���� ������!! = �� ���� ������ �ȵȴ�!!
	{
		printf("Insert a number: ");
		scanf_s("%d", &num);
		total += num;
	}

	printf("The result is %d\n", total);

	return 0;
}