// l�� �Է��Ͽ� �������� 100�ȼ� �̵��ϰ� r�� �Է��Ͽ� �簢���� ���������� �̵��ϴ� ���α׷��� �ۼ�
#include<windows.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void gotoxy(int x, int y)
{
	//COORD pos = { x, y }; // COORD�� Ŀ������ġ�� �����ϴ� ����ü�� ���⿡ x,y ��ġ�� ���� �ִ� ��(short��)
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