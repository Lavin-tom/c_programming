//wap to find the string length using 
//cmd line argument 
//load time input

#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	//argument is always 2. a.out file is one argument,string is one argument 
	if(argc!=2)
	{
		printf("string is not entered along with a.out\n");
		return;
	}
	else
	{
		//argv [0] is always a.out file so take second file
		for(i=0;argv[1][i];i++);
		printf("string length is : %d\n",i);	
	}
}
