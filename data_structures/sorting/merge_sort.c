//merge sort
//not yet completed.need update

#include<stdlib.h>
#include<stdio.h>
void display(int[],int);
void merge_sort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
	int arr[5]={10,7,3,12,4};
	printf("array before sorting\n");
	display(arr,5);

	merge_sort(arr,0,5-1);

	printf("array after sorting\n");\
	display(arr,5);
}
//for display the array
void display(int arr[],int n)
{
	 for(int i=0;i<n;i++)
		 printf("%d ",arr[i]);
}

//merge function for array 
void merge(int arr[],int l,int m,int r)
{
	//merge two sub array
	//first sub array is arr[l..m]
	//second subarray is arr[m+1..r]
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;

	int L[n1],R[n2];

	for(i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(j=0;j<n2;j++)
		R[i]=arr[m+1+j];

	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}

	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;

		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);

		merge(arr,l,m,r);
	}
}
