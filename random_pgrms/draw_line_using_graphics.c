//draw a line using graphics.h
#include<stdio.h>
#include<graphics.h>
int main()
{
	int i=0,j=0,gd=DETECT,gm;
	initgraph(&gd,&gm," ");

	for(i=0;i<=420;i=i+10)
	{
		setcolor(RED);

		line(0+i,300,210+i,300);
		delay(100);
		cleardevice();
	}
	getch();
	closegraph();
}

