//�ڵ��� ���� ���α׷�
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int gas = 100, amount =0 , total1 = 0, total2 = 0;
	char fill;
	printf("insert a command for the gas use. fill up + , used - \n");
	printf("The reamin gas is %dL\n", gas);
	//scanf_s("%c%d", &fill, &amount); --> �ۿ��� scanf�� ���� ��� ���� ������ �Ǿ� ��� ������ ���� �ȴ�.
	total1 = gas -=amount;
	total2 = gas += amount;
	do 
	{
		scanf_s("%c%d", &fill, &amount);
		if (fill == '-')
		{
			printf("remain gas is %dL\n", total1);
		}
		else if (fill == '+')
		{
			printf("remain gas is %d\n", total2);
		}
		else
		{
			printf("the input is wrong\n");
		}
	} while (gas >=100);

	printf("the gas is under 10%\n");
	return 0;
}

// �ʱⰪ�� 1000L�̴�
// �ڵ��� ������ �ϸ� ���ᰡ �پ���
// + -�� ���� ���� ���� �ȴ�
// 10%������ ��� ����� ����� �ȴ�.
// �ݺ����� ����Ͽ� ���� ��� ����ϴٰ� 10%���Ϸ� ������ ��� ���ͼ� ����� ��� �Ѵ�.
// ��� + -�� ���� ���� �ϴ°�? --> switch / case ������ �ذ� �Ǵ� if ������ �ذ� switch������ ���� �� ��� ������ �� ���� �ʴ´�. --> if���� ����Ͽ� �ڵ� ��--> �ᱹ ��� �� �� ����
// ���� ������� ������ �� �� ����. �ֳ��ϸ� 
// gas�� ���� ������ �Ǿ� �Ѵ�.


// ���� ������δ� ������ ���� ���Ѵ�. ���� �����  ������ ������ ����
int main(void) {

	double oil = 1000;
	double inout;
	do {
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ��� : ");
		scanf_s("%lf", &inout);
		oil += inout;
		printf("���� �����ִ� ���� %lf �Դϴ�.\n", oil);
		if (oil <= 100) {
			printf("\n(���) ���ᰡ 10%�����Դϴ�.\n");

		}
	} while (oil > 100);

}