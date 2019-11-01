// 피타고라스의 법칙이 성립하는 삼각형을 찾을 것
// 조건은 그 삼각형의 길이가 정수이며, 각 변의 길이가 100 이하 이다.

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int a = 1, b=1 , c=1;

	for (a = 1; a <= 100; a++)
	{
		for (b = 1; b <= 100; b++)
		{
			for (c = 1; c <= 100; c++)
			{
				if (a*a + b*b == c*c)
				{
					printf("a = %d, b = %d, c = %d\n", a, b, c);
				}
			}
		}
	}


	return 0;
}

// 일단 a*a+b*b = c*c가 성립 하는 프로그램을 만들어야 한다. 
//또한 각 변의 길이가 100이하임을 성립해야 한다
//3중 반복문을 사용
//필요한 변수 --> 반복을 위한 변수, 
// a,b,c