//small pgrm with command line arguments
//load time input questions

#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("argc is %d\n",argc); //argc gives total no of argument including executable file a.out
	printf("argv is %s\n",argv[2]); //by default cmnd line argument take all as string

	//for loop for printing all argc values 
	for(int i=0;i<argc;i++)
		printf("%s\n",argv[i]);
}
