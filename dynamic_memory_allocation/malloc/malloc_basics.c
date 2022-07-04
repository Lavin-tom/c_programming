//dma using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p;
	printf("enter n\n");
	scanf("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	printf("dynamically alloted memory\n");
	for(int i=0;i<10;i++)
		scanf("%d",&p[i]);
	for(int i=0;i<10;i++)
		printf("%d",p[i]);
}
