// 1~100�� �� �߿��� 3�� ����� ��� �Ͻÿ�
// for���� Ȱ���Ͽ� ����غ���. 
// ���� 1~100������ ������ �����. �׸��� �� �ȿ��� 3�� ����� ����ϴ� ���� ���� �ִ´�.

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