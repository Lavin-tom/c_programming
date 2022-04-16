//fseek

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
	pos=ftell(fp);
	printf("1. position: %d\n",pos);

	fseek(fp,5,SEEK_SET); 			//from begining of file move to 5th position

	ch=fgetc(fp);
	printf("ch=%c\n",ch);			//print 5th position character

	pos=ftell(fp);
	printf("2. position: %d\n",pos);	//current postion of pointer

	fseek(fp,3,SEEK_CUR);

	ch=fgetc(fp);
	printf("ch=%c\n",ch);			//print 9th positin character

	pos=ftell(fp);
        printf("3. position: %d\n",pos);

	fseek(fp,-2,SEEK_END);

	ch=fgetc(fp);
	printf("ch=%c\n",ch);			//print -5 from end

	pos=ftell(fp);
        printf("4. position: %d\n",pos);	
}
