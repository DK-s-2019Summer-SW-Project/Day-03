// ����ڷ� ���� 1���� 50������ ���� 10���� �Է� �޾Ƽ� �� ���� ��ŭ�� ��ǥ�� ���

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

// ���ڸ� �Է� �޴´�, �׷��� ������ 50���� --> 50�� �ʰ��� ���� �Է� �޴� ��� �� �Է��� �䱸 �� ��
// �׳� �̰� 10�� �ݺ� �ϸ� �ɵ�.
// ���ڸ� �Է� �޴� ���� 1��, ���� ����ϱ� ���� ���� 1��, �ݺ��� ���� ���� 1��