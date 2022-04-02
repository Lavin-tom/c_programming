//swapping of any two type using macros
//multiline macros

#include<stdio.h>
#include<stdlib.h>
#define swap(a,b) a=a+b;\
		  b=a-b;\
		  a=a-b;
int main()
{
	int a,b;
	float m,n;
	char x,y;
	printf("enter integer\n");
	scanf("%d %d",&a,&b);
	printf("enter float nos\n");
	scanf("%f %f",&m,&n);
	printf("enter characters\n");
	scanf(" %c %c",&x,&y);

	printf("nos before swapping a=%d b=%d\n",a,b);
	swap(a,b);
	printf("nos after swapping a=%d b=%d\n",a,b);

	printf("\nno before swapping m=%.2f n=%.2f\n",m,n);
	swap(m,n);
	printf("nos after swpping m=%.2f n=%.2f\n",m,n);

	printf("\nchara before swapping x=%c y=%c\n",x,y);
	swap(x,y);
	printf("chara after swapping x=%c y=%c\n",x,y);
}
