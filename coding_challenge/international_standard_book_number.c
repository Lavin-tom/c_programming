//wap to check the isbn is valid or not valid
//for isbn -10
#include<stdio.h>
int main()
{
	char d,count=1,sum=0;
	long int no,temp;
	printf("enter no\n");
	scanf("%ld",&no);
	
	temp=no;
	while(temp>0)
	{
		d=temp%10;
		sum=sum+(count*d);
		temp=temp/10;
		count++;
	}
	if(sum%11==0)
		printf("%ld isbn is valid\n",no);
	else
		printf("%ld isbn is not valid\n",no);
}
