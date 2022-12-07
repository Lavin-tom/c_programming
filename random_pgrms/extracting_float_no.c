//extracting float
#include<stdio.h>
int main(){
	long double f,ff;
	scanf("%Lf",&f);		//f=7.5
	int a=f,b=0;		//a=7
	ff=f-a;			//ff=7.5-7=0.5
	ff=ff*10;		//0.5*10=5.0
	b=ff;			//b=5
	printf("f:%Lf\n",f);
	printf("a:%d\n",a);
	printf("ff:%Lf\n",ff);
	printf("b:%d\n",b);
}
