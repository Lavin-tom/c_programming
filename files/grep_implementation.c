//wap to implement grep
//./a.out pattern filename

#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[])
{
	if(argc!=3){
	printf("must have ./a.out pattern filename\n");
	return 0;}
	
	FILE *fp;
	char buf[128];
	fp=fopen(argv[2],"r");
	if(fp==NULL){
		printf("file not opened\n");
	return 0;}

	while(fgets(buf,128,fp))		//read line by line 
	{
		if(strstr(buf,argv[1]))		//find for substring
			printf("%s",buf);
	}			
}
