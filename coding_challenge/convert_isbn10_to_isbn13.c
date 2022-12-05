//wap to convert isbn10 to isbn 13
//for isbn13 add 978 at the begin and adjsut last digit based on isbn13 standard
#include<stdio.h>
int main()
{
	char d,count=0,mul_val=3;
	long int total=978;
	long int no,temp,sum=0;
	printf("enter no\n");
	scanf("%ld",&no);
	
	//to reverse the isbn no
	temp=no;
	while(count<10)
	{
		d=temp%10;
		sum=sum*10+d;
		temp=temp/10;
		count++;
	}
	
	//convert to isbn 13 with 978 at the begining
	while(sum>0)
	{
		d=sum%10;
		total=total*10+d;
		sum/=10;
	}
	
	//to adjust last no based on isbn 13 standard
	for(int i=0;i<=9;i++)
	{
		sum=0;
		count=1;
		temp=total;
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
		if(sum%10==0){
			printf("%ld\n",total);
			break;
		}
		else 
			total+=1;
	}
}
