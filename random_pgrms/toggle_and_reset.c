//toggle and reset
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("enter num\n");
	scanf("%d",&num);

	for(int i=7;i>=0;i--){
		printf("%d",num>>i&1);
		if((num>>i&1)==0)
			count++;
	}
	if(count%2==0)
		printf("\neven\n");
	else
		printf("\nodd\n");
}
