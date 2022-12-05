//wap to check the isbn is valid or not valid
//for isbn -13
#include<stdio.h>
int main()
{
	char d,count=1,sum=0,mul_val=3;
	long int no,temp;
	printf("enter no\n");
	scanf("%ld",&no);
	
	temp=no;
	while(temp>0)
	{
		d=temp%10;
		if(count%2==1)
			mul_val=1;
		else 
			mul_val=3;

		sum=sum+(mul_val*d);
		temp=temp/10;
		count++;
	}
	if(sum%10==0)
		printf("%ld isbn is valid\n",no);
	else
		printf("%ld isbn is not valid\n",no);
}
