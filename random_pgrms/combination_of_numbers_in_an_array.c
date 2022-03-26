//combination of no in an array

#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	char arr[n];
	printf("enter the elements into array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&arr[i]);
	}
	printf("the combinations are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j){
			printf("%c %c\n",arr[i],arr[j]);
			count++;}
		}
	}
	printf("possible combination count is %d \n",count);
}
