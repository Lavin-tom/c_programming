//triple pointer
#include<stdio.h>
int main(){
	int x;
	printf("x addr:%u\n",&x);

	int *p=NULL;
	printf("p addr:%u\n",&p);

	int **q=&p;
	printf("q addr: %u\n",&q);

	int ***r=&q;
	printf("r addr: %u\n",&r);
	printf("enter p\n");
	scanf("%d",&p);

	printf("p addr: %u\n",&p);

	*q=&x;
	*p=100;
	printf("*p : %u\n",*p);
	
	***r=***r+50;

	printf("***r:%d\n",***r);
	printf("**q:%d\n",**q);
	printf("*p:%d\n",*p);
}
