//time conversion

#include<stdio.h>
int main()
{
	//char time[15]={"05:25:43PM"};
	char time[15];
	printf("enter time in 12 hr format\n");

		scanf("%s",time);
	int h,m,s,z;

	if(time[8]=='P')
	{
		time[0]='1';
		time[1]=time[1]+2;
		time[8]='\0';
	}
	if(time[8]=='A'&& time[0]=0)
	{
		time[8]='\0';
	}
	if(time[0]=1 && time[1]==2 && time[8]=='A')
	{
		time[0]='0';
		time[1]='0';
		time[8]='\0';
	}	

	printf("%s\n",time);
}
