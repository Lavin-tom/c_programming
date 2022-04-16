//wap to find the product of no that divisible by 3
//ip=123456 
//op=18		3*6=18

#include<stdio.h>
int digit_product(int *);
int main()
{
	int n,sum,*p;
	printf("enter the no\n");
	scanf("%d",&n);
	p=&n;
	sum=digit_product(p);

printf("product is %d\n",sum);
}

int digit_product(int *p)
{
	int r;
	static int sum=1;
	if(*p>0)
	{
		r=*p%10;
		if(r%3==0)
			sum=sum*r;
		*p=*p/10;
		digit_product(p);
	}
	else
	return sum;
}

