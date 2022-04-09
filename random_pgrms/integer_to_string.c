//wap to convert integer into string
//opposite to atoi function

#include<stdio.h>
#include<string.h>
int main()
{
	int n,count=0;
	printf("enter the integer\n");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		 count++;
		n=n/10;
	}
	char s[count];
	for(int i=count-1;i>=0;i--)
	{	
		int k=temp%10;
		s[i]=k+48;				//to get the correct ascii value add 48 ascii of zero
		temp=temp/10;
	}
	s[count]='\0';	
	printf("your input integer will be string now %s\n",s);
}
