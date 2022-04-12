//adding multiple characters to the files
//fputs

#include<stdio.h>
int main()
{
	char a[20];
	int ret;
	FILE *fp;
	fp=fopen("temp","w");
	if(fp==0)
	{
		printf("file not opened\n");
		return 0;
	}
	printf("enter data to write into file\n");
	scanf("%s",a);
	ret=fputs(a,fp);
	if(ret==-1)
	{
		printf("unable to write into the file\n");
		return 0;
	}
	else
		printf("data write into file sucess\n");
}
