#include<stdio.h>
#include<windows.h>

#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int x = 30, y = 200; // ���� �ʱ� ��ġ
	int vx = 50, vy = -50; // ���� �ʱ� �ӵ�
	int i;

	// ������ �׸���
	MoveToEx(hdc, 30, 200, NULL);
	LineTo(hdc, 800, 200);

	//�ݺ� ����
	for (i = 0; i < 20; i++)
	{
		vy = vy + 10;
		x = x + vx;
		y = y + vy;

		Ellipse(hdc, x, y, x + 10, y + 10);
		Sleep(100);
	}

	return 0;
}