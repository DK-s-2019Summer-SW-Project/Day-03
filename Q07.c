// 1~100������ �ڿ��� �߿��� 3�� ����̸鼭 ���ÿ� 5�� ����� ���ڸ� ����غ���

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	int i;
	for (i = 1; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}


	return 0;
}