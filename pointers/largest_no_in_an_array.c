//find the largest no in an array using pointer concept

#include<stdio.h>
void arrange(int n,int *a)
{
	int i,j,temp;

	// arrange the element in increment order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			//swap two no using a third variable temp
			if(*(a+i)> *(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
int main()
{	int i,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	arrange(n,a);
	printf("largest no in an array is %d\n",*(a+(n-1)));
}
