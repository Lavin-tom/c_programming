//read five sturuct data
//sort the struct data and copied to files

#include<stdio.h>
	struct student
	{
		int r;
		char name[20];
		float marks;
	};
int main()
{
	FILE *fp;
	fp=fopen("temp","w+");
	if(fp==NULL)
	{
		printf("file not opened\n");
	}
	struct student v1[5],v2[5];

	for(int i=0;i<5;i++)
	{
	printf("enter student rollname\n");
	scanf("%d",&v1[i].r);
	printf("enter student name\n");
	scanf("%s",v1[i].name);
	printf("enter student mark\n");
	scanf("%f",&v1[i].marks);
	}
	printf("student data writing into file\n");
	sleep(3);
	for(int i=0;i<5;i++)
	fprintf(fp,"%d %s %f\n",v1[i].r,v1[i].name,v1[i].marks);
	printf("writing data completed\n");
}
