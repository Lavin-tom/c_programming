//wap to convert float into string
//opposite to atof function

#include<stdio.h>
#include<string.h>
int main()
{
	float f,ff;
	char s[30];
	int count=0;
	printf("enter the float value\n");
	scanf("%f",&f);
	int a,b,count_d=0,tempd;

	a=f;
	ff=f-a;
	tempd=a;
	while(tempd>0)				//to count the decimal value
	{
		count_d++;
		tempd=tempd/10;
	}
	for(int i=count_d-1;i>=0;i--)		//add decimal value to the string
	{
		s[i]=(a%10)+48;			//to get exact digit add zero ascii value 48
		a=a/10;
	}
	s[count_d]='.';				//add decimal symbol next to decimal 
	
	//printf("ff %f\n",ff);
	for(int i=1;i<6;i++)			//for add fraction value, precision is set to 5 points only  
	{
		ff=ff*10; 		//.75*10=7.5
		b=ff;			//b=7
		s[count_d+i]=b+48;		//to get exact decimal value add zero ascii value 48
		ff=ff-b;		//7.5-7=.5
	}
	s[count_d+6]='\0';
	printf("%s\n",s);

}
