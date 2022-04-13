//copy array value using files

#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int b[5];
	FILE *fp;
	fp=fopen("temp","w+");
	for(int i=0;i<5;i++)
	{
		fprintf(fp,"%d",a[i]);
	}
	rewind(fp);
	for(int i=0;i<5;i++)
	{
		fscanf(fp,"%d ",&b[i]);
	}
}
