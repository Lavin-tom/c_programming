//swap two bytes 
#include<stdio.h>
int main()
{
	long int a=0xcdef;
	printf("data before swapping: %x\n",a);
	
	char temp,t1,t2;
	for(int i=15;i>=0;i--)
		printf("%d",a>>i&1);
	printf("\n");
	for(int i=0,j=8;i<=7;i++,j++)
	{
		t1=a>>i&1;
		t2=a>>j&1;
		if(t1!=t2)
		{
			a=a^(1<<i);
			a=a^(1<<j);
		}
	}
	printf("%x\n",a);

}
