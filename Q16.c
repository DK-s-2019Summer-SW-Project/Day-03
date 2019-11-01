//자동차 연료 프로그램
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int gas = 100, amount =0 , total1 = 0, total2 = 0;
	char fill;
	printf("insert a command for the gas use. fill up + , used - \n");
	printf("The reamin gas is %dL\n", gas);
	//scanf_s("%c%d", &fill, &amount); --> 밖에서 scanf를 받을 경우 값이 고정이 되어 계속 루프가 돌게 된다.
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

// 초기값이 1000L이다
// 자동차 주행을 하면 연료가 줄어든다
// + -에 따라 값이 조정 된다
// 10%이하인 경우 경고문이 출력이 된다.
// 반복문을 사용하여 값을 계속 계산하다가 10%이하로 떨어질 경우 나와서 경고문을 출력 한다.
// 어떻게 + -를 구분 짓게 하는가? --> switch / case 문으로 해결 또는 if 문으로 해결 switch문으로 실행 할 경우 실행이 잘 되지 않는다. --> if문을 사용하여 코딩 중--> 결국 사용 할 수 없다
// 위의 방법으로 실행을 할 수 없다. 왜나하면 
// gas의 값이 축적이 되야 한다.


// 위의 방식으로는 실행을 하지 못한다. 밑의 방식을  이해해 보도록 하자
int main(void) {

	double oil = 1000;
	double inout;
	do {
		printf("연료 충전은 +, 소모는 -로 입력해주세요 : ");
		scanf_s("%lf", &inout);
		oil += inout;
		printf("현재 남아있는 양은 %lf 입니다.\n", oil);
		if (oil <= 100) {
			printf("\n(경고) 연료가 10%이하입니다.\n");

		}
	} while (oil > 100);

}