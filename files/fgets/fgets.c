//fgets
//command line argument

#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char a[50];
	if(argc!=2){
		printf("must have ./a.out filename\n");
		return 0;}
	fp=fopen(argv[1],"r");
	if(fp==0){
		printf("file not opened\n");
		return 0;}

	//while condition false util null
	while(fgets(a,50,fp))		//array name,array size,file name 
			printf("%s\n",a);
}
