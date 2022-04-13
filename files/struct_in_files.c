//wap to take one student  record and stored in files

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
	fp=fopen("temp","w");
	struct student v;
	printf("enter student roll no\n");
	scanf("%d",&v.r);
	printf("enter student name\n");
	scanf("%s",v.name);
	printf("enter student mark\n");
	scanf("%f",&v.marks);

	printf("student data writing into files\n");
	sleep(3);					//just a delay. not required for normal execution 
	fprintf(fp,"%d %s %f\n",v.r,v.name,v.marks);
	printf("writing data into file complete..\n");
}
