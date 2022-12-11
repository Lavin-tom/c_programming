//sum of integers using command line arguments
//we need atoi function to convert string into integer
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum=0;
	if(argc==1){
		printf("required atleast one input\n");
		return 0;
	}
	for(int i=1;argv[i];i++)
		sum=sum+atoi(argv[i]);

	printf("argc: %d\n",argc);
	printf("sum : %d\n",sum);
}
