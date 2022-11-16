//hours passed
//time t1 and time t2 and return the numbers of Hours b/w two times

#include<stdio.h>
int main()
{
	float t1,t2;
	char time1[3],time2[3];
	printf("enter time t1 and meridean(am/pm)\n");
	scanf("%f %s",&t1,time1);
	printf("enter time t2 and meridean(am/pm)\n");
	scanf("%f %s",&t2,time2);

	if(time1[0]=='p')
		t1=t1+12;
	if(time2[0]=='p')
                t2=t2+12;

	float diff=t1-t2;
	if(diff<0)
		diff*=-1;
	printf("%.2f hours\n",diff);
}
