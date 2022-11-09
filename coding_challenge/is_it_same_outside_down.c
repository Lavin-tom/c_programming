//The number 6090609 has a special property: 
//if you turn the number upside down (imagine rotating your screen 180 degrees), you get 6090609 again.

//Write a function that takes a string on the digits 0, 6, 9 and returns true
// if the number is the same upside down or false otherwise.
#include<stdio.h>
void same_upside_down(int,int,int);
int main()
{
	int num,temp1,sum=0,r,length=0;
	printf("enter no\n");
	scanf("%d",&num);

	temp1=num;

	while(num>0){
		length++;
		r=num%10;
		sum=(10*sum)+r;
		num=num/10;
	}
	same_upside_down(sum,temp1,length);
}
void same_upside_down(int sum,int temp1,int length)
{
	int count=0,r,s;
	while(temp1>0){
		r=temp1%10;
		s=sum%10;
		if((r==9 && s==6) || (r==6 && s==9) || r==0 && s==0)
		       count++;	
		temp1=temp1/10;
		sum=sum/10;
	}
	if(count==length)
		printf("true\n");
	else
		printf("false\n");

}
