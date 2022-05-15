//selection sort
//with random generated input as the elements of array

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int random_();
int main()
{
	int n,m,temp;
	srand(getpid());
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	//random elements added into the array
	for(int i=0;i<n;i++)
	{
		m=random_();
		a[i]=m;
	}
	
	printf("Array before sorting\n");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);

	//sorting
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//printing array after sorting
	printf("\nAfter sorting\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
//random generation of array elements
int random_()
{
	int n;
	for(int i=1;i<=1000;i++)
        {
		//predef function for generate random no
                n=rand()%1000+1;
        }
	return n;
}