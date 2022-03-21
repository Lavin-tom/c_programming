//wap to convert normal digit into 7 segment display format
//input 5
// output
//	 _
//	|_
//	 _|
 
#include<stdio.h>
void print_number(int array[10][7],int n);
int main()
{
	int array[10][7]={{1,1,1,0,1,1,1},{0,0,1,0,0,1,0},{1,0,1,1,1,0,1},{1,0,1,1,0,1,1},{0,1,1,1,0,1,0},{1,1,0,1,0,1,1},{1,1,0,1,1,1,1},{1,0,1,0,0,1,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1} }; 

	int n;	
	printf("enter the no\n");
	scanf("%d",&n);	

	if(n>=0 && 9>=n)
	{
		print_number(array,n);
	}

}

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
