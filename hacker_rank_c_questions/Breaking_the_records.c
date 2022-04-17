//breaking the records 
//question from hacker rank

#include<stdio.h>
void get_element(int*,int);
void sort_element(int*,int);
void disp_element(int*,int);
int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	get_element(arr,n);
	sort_element(arr,n);
}
void get_element(int *arr,int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sort_element(int *arr,int n)
{
	int count_s=0,count_b=0;
	int big=arr[0];
	int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>big)
		{
		big=arr[i];
		count_b++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			count_s++;
		}
	}
	printf("%d %d\n",count_b,count_s);
}
