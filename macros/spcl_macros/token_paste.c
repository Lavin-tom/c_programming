//token paste

#include<stdio.h>
#define paste(a,b) a##b
#define marks(sub) marks##sub
int main()
{
	int k1=10;
	int k2=20;
	int marks_c=100;
	int marks_linux=50;

	printf("%d\n",paste(k,1));	//printf("%d\n",k1);
	printf("%d\n",paste(k,2));	//printf("%d\n",k2); 
	printf("%d\n",marks(_c));	//printf("%d\n",marks_c);
	printf("%d\n",marks(_linux));	//printf("%d\n",marks_linux));
}
