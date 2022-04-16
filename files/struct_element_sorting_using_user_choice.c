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
	int op;
	FILE *fp;
	fp=fopen("temp","w+");
	if(fp==NULL)
	{
		printf("file not opened\n");
		return 0;
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
	
	//sorting the records based on roll no, name and marks
	//according to user choice
	printf("select any option\n");
	print("1.based on roll no\n2. based on name\n3. base on marks\n");
     	scanf("%d",&op);
	
	switch (op)
	{
		case 1 :
			break;
		case 2 :
			break;
		case 3 :
			break;
	}	

	printf("student data writing into file\n");
	sleep(3);

	for(int i=0;i<5;i++)
	fprintf(fp,"%d %s %f\n",v1[i].r,v1[i].name,v1[i].marks);
	rewind(fp);

	printf("writing data into file completed..\n");
	sleep(3);

	printf("reading data form file..\n");
	for(int i=0;i<5;i++)
	fscanf(fp,"%d %s %f\n",&v2[i].r,v2[i].name,&v2[i].marks);
	sleep(3);

	printf("data after reading from file..\n");
	for(int i=0;i<5;i++)
	printf("%d %s %f\n",v2[i].r,v2[i].name,v2[i].marks);
}
