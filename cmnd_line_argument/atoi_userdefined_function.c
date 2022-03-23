//wap to convert the input string into integer 
//used defined funtion for atoi
//command line argument/load time input

#include<stdio.h>
int atoi_user(char *argv);
int main(int argc,char *argv[])
{
	int res;
	//argument is always 2. a.out file is one argument,string is one argument 
	if(argc!=2)
	{
		printf("string is not entered along with a.out\n");
		return;
	}
	else
	{	
		//function call return value stored in res
		res=atoi_user(argv[1]);
		printf("atoi user defined funtion value is : %d\n",res);
	}
}

int atoi_user( char *argv)
{
	int i=0,n=0;
		//check for input value is negative or not 
		//if negative ignore the symbol skip to 2nd position
		if(argv[0]=='-')
		{
			i=1;
		}	
		//for loop for checking the integer in string 
		for( ;argv[i];i++)
		{
			if(argv[i]>= '0' && argv[i]<= '9')
			{
				//if interger present subtract 48 to get no in integer
				//convetion of ascii to integer here
				n=n*10+(argv[i]-48);
			}
		}
		//if input value is negative output no is also negative
		if(argv[0]!='-')
		{
			return n;
		}
		//convert positive no here
		//return the final n value along with the sign 
		else
		{
			n=-n;
			return n;
		}
}

