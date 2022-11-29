//wap to get this pattern
//1
//2 4
//1 3 5 
//2 4 6 8
//1 3 5 7 9
#include<stdio.h>
int main()
{
	int n,k=0;
	printf("enter n\n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0)
				printf("%d ",j*2);
			else
				printf("%d ",j+k);
			k+=1;
		}
		k=0;
		printf("\n");
	}
}
