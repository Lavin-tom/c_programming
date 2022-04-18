//Migratory birds
//hacker rank question

#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	int arr[n],arr_s[n],temp,count=0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	}
	}
		//for(int i=0;i<n;i++)
		//	printf("%d ",arr[i]);

		for(int i=0;i<n;i++)
		{
			count=0;
			int k=arr[i];
			for(int j=0;j<n;j++)
			{
				if(k==arr[j])
					count++;
			}
			arr_s[i]=count;
		}
		//printf("\n");
		//for(int i=0;i<n;i++)
		//	printf("%d ",arr_s[i]);
		int big=arr_s[0];
		for(int i=0;i<n;i++)
		{
			if(big<arr_s[i])
				big=arr_s[i];
		}
		//printf("big is %d\n",big);
		int index=0;
		for(int i=0;i<n;i++)
		{
			if(arr_s[i]==big)
			{
				index=i;
				//printf("%d",i);
				break;
			}
		}
		printf("%d\n",arr[index]);
}
