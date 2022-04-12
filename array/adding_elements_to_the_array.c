//wap to add elements to the particular index postion

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5};
	int a,b;
	printf("enter index position and new element\n");
	scanf("%d %d",&a,&b);
	
	for(int i=0;arr[i];i++)
		printf("%d ",arr[i]);

	printf("\n");

	for(int i=5;i>=a;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[a]=b;
	for(int i=0;arr[i];i++)
		printf("%d ",arr[i]);
}
