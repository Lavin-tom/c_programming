//wap to convert the input string into float
//using user defined funtion for atof
//command line argument/load time input

#include<stdio.h>
#include<math.h>
int user_atof(char *argv[]);
int find_dpoint(char *argv[]);
int find_fraction(char *argv[],int decimel);
int count_fraction(char *argv[],int decimel);
int main(int argc,char *argv[])
{
	float res=0,result=0,value;
	float fraction,fraction_value;
	int decimel=0,count=0;
	//argument is always 2. a.out file is one argument,string is one argument 
	if(argc!=2)
	{
		printf("string is not entered along with a.out\n");
		return 0;
	}
	else
	{
		decimel=find_dpoint(argv);
		//printf("decimel %d\n",decimel);
		res=user_atof(argv);
		
		printf("res %f\n",res);
		fraction=find_fraction(argv,decimel);

		//printf("fraction %f\n",fraction);
		count=count_fraction(argv,decimel);

		value=pow(10,-count);

		//printf("value %f\n",value);
		fraction_value=value*fraction;
		if(res<0)
			res=-res;
		result=res+fraction_value;

		//printf("fraction_value %f\n",fraction_value);
		if(argv[1][0]=='-')
		result=-result;	
		printf("final value of atof is %f\n",result);
	}
}
//count the fraction no
int count_fraction(char *argv[],int decimel)
{
	int i,n,count=0;
	for(i=decimel;argv[1][i];i++)
	{
		if(argv[1][i]>= '0' && argv[1][i]<='9')
		{
			n=n*10+(argv[1][i]-48);
			count++;
		}

	}
	return count;
}
//to get the fraction no
int find_fraction(char *argv[],int decimel)
{
	int i,n;
	for(i=decimel;argv[1][i];i++)
	{
		if(argv[1][i]>= '0' && argv[1][i]<='9')
		{
			n=n*10+(argv[1][i]-48);
		}

	}
	return n;
}
//function for decimal point index value
int find_dpoint(char *argv[])
{
	int i=0;
	if(argv[1][0]=='-')
	{
		i=1;
	}
	for( ;argv[1][i];i++)
	{
		if(argv[1][i]=='.')
		{
		return i;
		break;
		}
	}

}
//get the integer value before decimal point
int user_atof(char *argv[])
{
	int i=0,n=0;
	if(argv[1][0]=='-')
	{
		i=1;
	}
	for( ;argv[1][i]!='.';i++)
	{
		if(argv[1][i]>='0' && argv[1][i]<='9')
		{
			n=n*10+(argv[1][i]-48);
		}
		if(argv[1][i]=='.')
			break;

	}
	if(argv[1][0]!='-')
	return n;
	else
	{
		n=-n;
		return n;
	}
}
