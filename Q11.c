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

//������ �Է� �޴´�
// 1 12 123 1234 �̷� ������ ����� ������ �����.
// ��ø �ݺ����� ����Ͽ� ����� --> �ݺ��� ���� ���� �ʿ� + ���� �Է��� ���� ������ �ʿ� +�ݺ��� ���� ���� ����