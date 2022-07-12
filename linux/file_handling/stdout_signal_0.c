//stdout close
//signal no 0
#include<stdio.h>
int main()
{
	int i=0;
	while(1)
	{
		printf("Hello..\n");
		//getchar not works when i==3
		getchar();
		i++;
		if(i==3)
			close(0);
	}
}
