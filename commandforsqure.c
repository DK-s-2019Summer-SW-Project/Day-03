// l을 입력하여 왼쪽으로 100픽셀 이동하고 r을 입력하여 사각형이 오른쪽으로 이동하는 프로그램을 작성
#include<windows.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void gotoxy(int x, int y)
{
	//COORD pos = { x, y }; // COORD는 커서의위치를 저장하는 구조체임 여기에 x,y 위치를 집어 넣는 것(short형)
	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	char command;
	Rectangle(hdc, 100, 100, 200, 200);

	printf("Insert the command r or l: ");
	command = getchar();

	if (command == 'r')
	{
		MoveToEx(hdc, 5000,5000,NULL);
	}

	return 0;
}