//wap to find the lcm of two nos

#include<stdio.h>
int lcm(int *a);
void arrange(int *a);
int main()
{
	int a[2],i,l;
	printf("enter numbers\n");
	for(i=0;i<2;i++)
	{
	scanf("%d",&a[i]);
	}
	arrange(a);
	l=lcm(a);
	printf("LCM : %d\n",l);
}
void arrange(int *a)
{
	int i,j,temp;
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int lcm(int *a)
{
	int f=a[0],s=a[1],k=2,i;
	
	for(i=0;i<2;i++)
	{
	if(a[1]%a[0]==0)
		return a[1];
	else
		a[1]=a[1]*k;
	k++;
	}

}	
