//ftell

#include<stdio.h>
int main()
{
	FILE *fp;
	int pos;
	char ch;
	fp=fopen("temp","r");
	if(fp==0)
	{
		printf("file not opened\n");
		return 0;
	}
	pos=ftell(fp);				//find the current position
	printf("1. position :%d\n",pos);

	ch=fgetc(fp);
	printf("2. ch : %c\n",ch);

	pos=ftell(fp);
	printf("2. position: %d\n",pos);
}
