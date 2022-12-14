//create a function 
//input is time in 12 hr format
//function return smallest angle b/w the minute hand and hour hand
//
#include<stdio.h>
int main()
{
	int hh,mm,ss;
	float h,m,d;
	printf("enter time in 12 hr format\n");
	scanf("%d %d %d",&hh,&mm,&ss);
	
	//equation for angle b/w hour hand and minute hand from wikipedia
	h = 0.5 *((60 * hh) - (11 * mm));

	printf("%f\n",h);
	
	//if angle is >180 then subtract from 360
	if(h>180)
		h=360-h;
	printf("%f\n",h);
}
