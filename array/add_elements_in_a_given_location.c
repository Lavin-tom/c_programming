//wap to insert elements to a specific location of an array
#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50};
	
	int a,n;
	printf("enter element and location\n");
	scanf("%d %d",&a,&n);

	//right rotation 
	for(int i=8;i>=n;i--)
	{
		arr[i+1]=arr[i];
	}
	//adding elements
	arr[n]=a;


	for(int i=0;i<10;i++)
	printf("%d ",arr[i]);

}

