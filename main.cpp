#include<iostream>
#include<easyx.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
int main()
{
	IMAGE img;
	MOUSEMSG m;
	unsigned char ctrl = 0;
	initgraph(720, 954);
	loadimage(&img, _T("Resource//LingHua.jpg"));
	putimage(0, 0, &img);
	
	setbkmode(TRANSPARENT);
	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (m.x >= 250 && m.x <= 380 && m.y >= 400 && m.y <= 600)
			{
				outtextxy(m .x, m .y, _T("你这个老色批"));
				Sleep(2000);
				cleardevice();
				putimage(0, 0, &img);
				ctrl += 1;
			}
			else if (m.x >= 290 && m.x <= 430 && m.y >= 180 && m.y <= 345)
			{
				outtextxy(m.x, m.y, _T("哟，忍不住动手了啊"));
				Sleep(2000);
				cleardevice();
				putimage(0, 0, &img);
				ctrl += 1;
			}
			else if (m.x >= 274 && m.x <= 623 && m.y >= 751 && m.y <= 815)
			{
				outtextxy(m.x, m.y, _T("原来是个腿控吗"));
				Sleep(2000);
				cleardevice();
				putimage(0, 0, &img);
				ctrl += 1;
			}
			else
			{
				outtextxy(m.x, m.y, _T("就这？"));
				Sleep(1500);
				cleardevice();
				putimage(0, 0, &img);
			}
			if (ctrl == 6) break;
		}
		
	}
	cleardevice();
		outtextxy(300, 450, _T("不管怎么说，你就是个henti"));
		Sleep(4000);
	return 0;
}