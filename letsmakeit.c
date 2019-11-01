#include<stdio.h>
#include<time.h>
#include<windows.h>

int gole(int stx, int sty, int size);
int gori(int stx, int sty, int size);
int group(int stx, int sty, int size);
int godo(int stx, int sty, int size);

gotoxy(int x, int y)
{

	COORD Pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main()
{
	int line, high;
	int stX, stY;
	int i, j;
	int menu;
	int rx, ry;
	printf("Which squre are you going to make?(1. 사각형 2. 테두리만 3. 달팽이)\n");
	scanf_s("%d", &menu);
	printf("Insert the length of the squre line, high: ");
	scanf_s("%d %d", &line, &high);
	printf("Insert a start line: \n");
	scanf_s("%d %d", &stX, &stY);

	gotoxy(stX, stY);

	if (menu == 1)
	{
		for (i = 0; i < line; i++)
		{

			for (j = 0; j < high; j++)
			{
				printf("□");
			}
			printf("\n");
		}
	}
	else if (menu == 2)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		ry = godo(stX, stY, high);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA);
		rx = gori(stX, stY, line);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC);
		ry = group(rx, ry, high);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE);
		gole(rx, stY, line);
	}
	else if (menu == 3)
	{
		while (line != line / 2 && high != high / 2)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			ry = godo(stX, stY, high);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA);
			rx = gori(stX, stY, line);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC);
			ry = group(rx, ry, high);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE);
			gole(rx, stY, line);
			line -= 2;
			high -= 2;
			stX++;
			stY++;
		}
	}
	scanf_s("%d", &i);
	return 0;
}

int gole(int stx, int sty, int size)
{
	int i;
	for (i = 0; i < size - 1; i++)
	{
		gotoxy(stx - i, sty);
		Sleep(30);
		printf("◎");
	}
	return stx - i + 1;
}

int gori(int stx, int sty, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		gotoxy(stx + i, sty);
		Sleep(30);
		printf("◎");
	}
}

int group(int stx, int sty, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		gotoxy(stx, sty - i);
		Sleep(30);
		printf("◎");
	}
	return sty - i + 1;
}

int godo(int stx, int sty, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		gotoxy(stx, sty + i);
		Sleep(30);
		printf("◎");
	}
	return sty + i - 1;
}