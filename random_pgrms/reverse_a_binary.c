//wap to reverse a binary no
#include<stdio.h>
#include<math.h>
int main()
{
	int n,d=7,sum=0,k=7,a[8],count=0,flag=0;
	printf("enter n\n");
	scanf("%d",&n);

	printf("Binary no:\n");
	for(int i=7;i>=0;i--)
	{	
		//extracting binary no
		int b=n>>i&1;
		if(b==0 && flag==0)
			count++;
		else
			flag=1;
		printf("%d",b);
		//store extracted value into array in reversed order
		a[k]=b;
		k--;
	}
	printf("\nafter reversing\n");
	d=d-count;
	//to calculate the binary equalent of value stored in array 
	for(int i=0;i<=7;i++)
	{
		printf("%d",a[i]);
		sum=sum+(a[i]*pow(2,d));
		d--;
	}
	printf("\nreversed digit sum:%d\n",sum);
}
