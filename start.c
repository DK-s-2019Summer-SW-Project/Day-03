#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

//int main()
//{
//	int month, day = 0;// day is 0 을 설정을 해야 디버깅 에러가 발생 하지 않는다. day에 할당 된 값이 있어야 함.
//	printf("Insert the month : ");
//	scanf_s("%d", &month);
//
//	switch (month)
//	{
//	case 1:
//		day = 31;
//		break;
//	case 2:
//		day = 28;
//		break;
//	case 3:
//		day = 31;
//		break;
//	case 4:
//		day = 30;
//		break;
//	case 5: 
//		day = 31;
//		break;
//	case 6:
//		day = 30;
//		break;
//	case 7:
//		day = 31;
//		break;
//	case 8:
//		day = 31;
//		break;
//	case 9:
//		day = 30;
//		break;
//	case 10:
//		day = 31;
//		break;
//	case 11:
//		day = 30;
//		break;
//	case 12:
//		day = 31;
//		break;
//	default:
//		printf("wrong input\n");
//		break;
//	}
//
//	printf("%d월의 일수는 %d입니다\n", month, day);
//	return 0;
//}

int main()
{
	int month, days;
	printf("Insert the month that you want to know: \n");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2: 
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		printf("Wrong input\n");
		break;
	}
	printf("The month%d is %ddays", month, days);

}