//wap to convert the input string into float
//using user defined funtion for atof
//command line argument/load time input

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int user_atof(char *argv);
int find_dpoint(char *argv);
//int find_fraction(char *argv,int decimel);
//int count_fraction(char *argv,int decimel);
int main(int argc,char *argv[])
{
	float res=0,result=0,value;
	float fraction,fraction_value;
	int decimel=0,count=0;
	//argument is always 2. a.out file is one argument,string is one argument 
	if(argc!=2)
	{
		printf("string is not entered along with a.out\n");
		return;
	}
	else
	{
		decimel=find_dpoint(argv[1]);
		//printf("decimel %d\n",decimel);
		res=user_atof(argv[1]);
		
		printf("res %f\n",res);
		fraction=find_fraction(argv[1],decimel);

		//printf("fraction %f\n",fraction);
		count=count_fraction(argv[1],decimel);

		value=pow(10,-count);

		//printf("value %f\n",value);
		fraction_value=value*fraction;
		if(res<0)
			res=-res;
		result=res+fraction_value;

		//printf("fraction_value %f\n",fraction_value);
		if(argv[0]=='-')
		result=-result;	
		printf("final value of atof is %f\n",result);
	}
}
//count the fraction no
int count_fraction(char *argv,int decimel)
{
	int i,n,count=0;
	for(i=decimel;argv[i];i++)
	{
		if(argv[i]>= '0' && argv[i]<='9')
		{
			n=n*10+(argv[i]-48);
			count++;
		}

	}
	return count;
}
//to get the fraction no
int find_fraction(char *argv,int decimel)
{
	int i,n;
	for(i=decimel;argv[i];i++)
	{
		if(argv[i]>= '0' && argv[i]<='9')
		{
			n=n*10+(argv[i]-48);
		}

	}
	return n;
}
//function for decimal point index value
int find_dpoint(char *argv)
{
	int i=0;
	if(argv[0]=='-')
	{
		i=1;
	}
	for( ;argv[i];i++)
	{
		if(argv[i]=='.')
		{
		return i;
		break;
		}
	}

}
//get the integer value before decimal point
int user_atof(char *argv)
{
	int i=0,n=0;
	if(argv[0]=='-')
	{
		i=1;
	}
	for( ;argv[i]!='.';i++)
	{
		if(argv[i]>='0' && argv[i]<='9')
		{
			n=n*10+(argv[i]-48);
		}
		if(argv[i]=='.')
			break;

	}
	if(argv[0]!='-')
	return n;
	else
	{
		n=-n;
		return n;
	}
}
