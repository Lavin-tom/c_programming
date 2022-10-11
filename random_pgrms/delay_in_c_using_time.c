#include<stdio.h>
#include<time.h>
void delay(int);
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		delay(1);
		printf("%d second have passed\n",i+1);
	}
}

void delay(int no_of_seconds)
{
	int milli_sec=1000*no_of_seconds;
	clock_t start_time=clock();
	while(clock() <start_time+milli_sec);
}