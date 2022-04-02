//basics of macros
//perimeter of circle

#include<stdio.h>
#define PI 3.14  //define the value of pi as 3.14, when ever the PI value is there it is replaced with 3.14
int main()
{
	float r,res;
	printf("enter the radius\n");
	scanf("%f",&r);
	res=2*PI*r;
	printf("perimeter of circle is %f\n",res);
}
