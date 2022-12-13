//create a function 
//input is time in 12 hr format
//function return smallest angle b/w the minute hand and hour hand
//not yet completed
#include<stdio.h>
int main()
{
	int hh,mm,ss;
	float d;
	printf("enter time in 12 hr format\n");
	scanf("%d %d %d",&hh,&mm,&ss);
	
	d=(30*hh)-((11/2) * mm);
	printf("%f\n",d);
	if(d>180)
		d=360-d;
	printf("%f\n",d);
}
