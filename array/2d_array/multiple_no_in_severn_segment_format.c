//wap to convert normal multiple digit into 7 segment display format
//input 125
// output
//    _   _
// |  _| |_
// | |_   _|
 
#include<stdio.h>
int reverse(int n);
int no_extract(int n);
void print_number(int array[10][7],int n);
int main()
{
	//seven segment display working is based on these binary nos
	//each time each segement either on or off to form a number
	int array[10][7]={{1,1,1,0,1,1,1},{0,0,1,0,0,1,0},{1,0,1,1,1,0,1},{1,0,1,1,0,1,1},
		{0,1,1,1,0,1,0},{1,1,0,1,0,1,1},{1,1,0,1,1,1,1},{1,0,1,0,0,1,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1} }; 

	int n,v,length,value;	
	printf("enter the no\n");
	scanf("%d",&n);

	//reverse the input digits
	value=reverse(n);
	while(value>0)
	{	
	v=value%10;
	print_number(array,v);
	value=value/10;
	}

}
//function body of reverse
int reverse(int n)
{
	int r,sum=0;
	while(n>0)
	{	
	r=n%10;
	sum=sum*10+r;
	n=n/10;
	}
	return sum;
}

//printing the digits in digital form
void print_number(int array[10][7],int n)
{
	if(array[n][0])
		printf(" _");
		printf("\n");
	if(array[n][1])
		printf("|");
	else
		printf(" ");

	if(array[n][3])
		printf("_");
	else
		printf(" ");

	if(array[n][2])
		printf("|");
		printf("\n");
	if(array[n][4])
		printf("|");
	else
		printf(" ");
	if(array[n][6])
		printf("_");
	else
		printf(" ");
	if(array[n][5])
		printf("|");
		printf("\n");
}
