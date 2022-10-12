//simple binary clock

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int hh,mm,ss,m;
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	printf("current time: %d:%d:%d\n",tm.tm_hour,tm.tm_min,tm.tm_sec);
	printf("Main menu\n");
	printf("1. 24 hr clock \n2. 12 hr clock\n");
	scanf("%d",&m);

	switch(m)
	{
		case 2: printf("you selected 12hr clock\n");
			sleep(2);
			if(tm.tm_hour>12)
				hh=tm.tm_hour-12;
			else
				hh=tm.tm_hour;
			break;
		case 1: printf("you selected 24 hr clock\n");
			sleep(2);
			hh=tm.tm_hour;
			break;

	}
	int k=tm.tm_min,l=hh;
	while(1)
	{
		for(int i=tm.tm_sec;i<=59;i++)
		{
			//to clear the screen every second
			system("clear");
			printf("Binary clock ●○\n");
			//printing hour reading
			printf("HH :");
			for(int j=4;j>=0;j--){
				if(l>>j&1) 
					printf("●"); 
				else 
					printf("○");}
			printf("\n");

			//printing minute reading
			printf("MM :");
			for(int j=5;j>=0;j--){
				if(k>>j&1) 
					printf("●"); 
				else 
					printf("○");}
			printf("\n");
			
			//printing second reading
			printf("SS :");
			for(int j=5;j>=0;j--){
				if(i>>j&1) 
					printf("●"); 
				else 
					printf("○");}
			printf("\n");

			//one second delay
			sleep(1);

			//increment minute when seconds reach 59
			if(i==59)
			{
				i=0;
				k++;
			}
			//increment hour when minute reach 59
			if(k==59)
			{
				k=0;
				l++;
			}
			//increment hour based on clock selected
			if(m==2 && l==12 && k==59 && i==59)
				l=1;
			if(m==1 && l==23 && k==59 && i==59)
				l=0;
		}
	}
}
