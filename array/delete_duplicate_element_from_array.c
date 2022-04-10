//wap to delete duplicate elements from an array
//after delete the elements,still the size of array remain same 
//remain space is filled with zero

#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the array size\n");
	scanf("%d",&n);
	int  arr[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(int i=0,j=1;i<n;i++,j++)
	{
			if(arr[i]==arr[j])
			{
				for(int k=i;k<n;k++)
				arr[k]=arr[k+1];
				j--;
				
			}
	}
	//printing only non zero values
	//assumed that input array by not contain zero element
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		printf("%d ",arr[i]);
	}
}
