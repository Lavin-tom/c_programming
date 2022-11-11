//rectangle in circle
//wap to takes three nos, the width and height of rectangle 
//and radius of circle and return if the rectangle can fit the circle or not

#include<stdio.h>
#include<math.h>
int main()
{
	int r_w,r_h,r_c;
	printf("enter width and height of rectangle and radius of circle\n");
	scanf("%d %d %d",&r_w,&r_h,&r_c);

	float dia_r=sqrt((r_w*r_w)+(r_h*r_h));
	printf("Diagonal of rectangle is :%.2f\n",dia_r);

	//diagonal compare with diameter of circle
	if(dia_r<=(r_c*2))
		printf("Rectangle can fit inside circle\n");
	else
		printf("Rectangle can't fit inside circle\n");
}
