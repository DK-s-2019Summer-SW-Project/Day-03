// n�� ���� �Է� �ް� 1���� n������ ������ ���� ���Ѵ�.
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

//n�� ���� �Է� �޴´�
// ������ ������
// ������ �Է� �޴� ��, ����, ������ ������ ���� ��