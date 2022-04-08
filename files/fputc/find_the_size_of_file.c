//find the size of file
//command line argument 
//./a.out temp 

#include<stdio.h>
int main(int argc,char * argv[])
{	
	int count=0;
	char ch;
	if(argc!=2){
		printf("must have ./a.out and filename\n");
		return 0;}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0){
		printf("file not opened\n");
		return 0;}
	else
		printf("file opened\n");

	while((ch=fgetc(fp)!=EOF))
		count++;
	printf("size of file is %d\n",count);
}
