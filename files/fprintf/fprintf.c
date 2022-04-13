//fprintf
//writing data into file 

#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char str[20];
	fp=fopen(argv[1],"w");
	if(argc!=2){
	printf("must have ./a.out filename\n");
	return 0;}
	if(fp==0)
	{
		printf("file not opened\n");
		return 0;
	}
	fprintf(fp,"mumbai\n",str);		//adding string to the file 
}
