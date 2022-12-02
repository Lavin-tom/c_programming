//swap two bytes 
#include<stdio.h>
int main()
{
	long int a=0xabcdefab;
	printf("data before swapping: %x\n",a);
	
	char temp,t1,t2;
	for(int i=8,j=16;i<=15;i++,j++)
	{
		t1=a>>i&1;
		t2=a>>j&1;
		if(t1!=t2)
		{
			a=a^(1<<i);
			a=a^(1<<j);
		}
	}
	printf("data after swapping: %x\n",a);

}
