//file handling using stdout close
#include<stdio.h>
int main()
{
	int i=0;
	while(1)
	{
		printf("hello..\n");
		sleep(2);
		i++;
		//if i==3 then stdout not works
		if(i==3)
			close(1);
	}
}
