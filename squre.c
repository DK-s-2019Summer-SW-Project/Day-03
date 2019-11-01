#include<windows.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	HDC hdc = GetWindowDC(GetForegroundWindow());
	char command;

	printf("Insert the command r&c: ");
	command = getchar();

	if (command == 'r')
	{
		Rectangle(hdc, 100, 100, 200, 200);
	}

	else if (command == 'c')
	{
		Ellipse(hdc, 200, 100, 200, 200);
		
	}
	else
	{
		printf("Worng command\n");
	}


	return 0;
}