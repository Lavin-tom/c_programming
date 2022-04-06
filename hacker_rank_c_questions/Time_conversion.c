//time conversion

#include<stdio.h>
int main()
{
	//char time[15]={"05:25:43PM"};
	char time[15];
	printf("enter time in 12 hr format\n");

		scanf("%s",time);
	char h,m,s,z;

	h=time[0];
	m=time[1];

	int hr=((h-48)*10)+((m-48)*1);

	//printf("h is %c\n",h);
	//printf("m is %c\n",m);
	//printf("hr is %d\n",hr);
	
	if(time[8]=='A')
	{
		if(hr==12)
		{
			time[0]='0';
			time[1]='0';
			time[8]='\0';
		}
		else
		{
			time[8]='\0';
		}
	}
	if(time[8]=='P')
	{
		if(hr==12)
		{
			time[0]='1';
			time[1]='2';
			time[8]='\0';
		}
		else
		{
			int k=hr+12;
			int mm=k/10;
			int nn=k%10;
			time[0]=mm+48;
			time[1]=nn+48;
			time[8]='\0';
		}
	}
	
	printf("%s\n",time);
}
