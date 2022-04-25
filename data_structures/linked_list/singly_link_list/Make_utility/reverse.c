//reverse function
#include"myheader.h"
int reverse(int num)
{
	int sum=0;
	while(num>0)
	{
		sum=sum*10+(num%10);
		num=num/10;
	}
	return sum;
}
