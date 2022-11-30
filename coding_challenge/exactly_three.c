//wap to find the given no have exactly three divisors
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter n\n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
			printf("%d ",i);
		}
	}
	if(count==3)
		printf("\n%d have exactly three divisors\n",n);
	else
		printf("\n%d have not exactly three divisors\n",n);
}
