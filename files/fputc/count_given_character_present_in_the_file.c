//count given character present in the file
//command line argument 
//./a.out character filename

#include<stdio.h>
int main(int argc,char * argv[])
{
	int count=0;
	char ch,c;
	if(argc!=3){
		printf("must have ./a.out , character and filename\n");
		return 0;}
	FILE *fp;
	
	fp=fopen(argv[2],"r");
	if(fp==0){
		printf("file not opened\n");
		return 0;}
	while((ch=fgetc(fp))!=EOF)
	{
		if(*argv[1]==ch)
		count++;
	}

	printf("character %s present in file %s is %d\n",argv[1],argv[2],count);
}
