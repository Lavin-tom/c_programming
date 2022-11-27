//wap to find the no is disarium or not
#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp=0,count=0,sum=1,d,total_sum=0,temp2,m;
    printf("enter num\n");
    scanf("%d",&num);

    temp=num;
    temp2=num;
    //to check the no of digit in user entered value
    while(temp>0)
    {
        count++;
        temp/=10;
    }

    while(num>0)
    {
        d=num%10;
	sum=1;
	m=count;

	//to find each digit power
	while(m>0)
	{
		sum=sum*d;
		m--;
	}

        total_sum=total_sum+sum;
        num/=10;
	count--;
    }
    if(total_sum==temp2)
        printf("%d is a disarium number\n",temp2);
    else
        printf("%d is not a disarium number\n",temp2);
}
