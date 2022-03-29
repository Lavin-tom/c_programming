//structures for adding disimilar types of elements 

#include<stdio.h>
#include<stdlib.h>
	struct student 
	{
		int rollno;
		char name[10];
		float mark;
	};
int main()
{
	printf("enter students details\n");
	struct student *s1[2];

	//s1[i]=struct* malloc(sizeof(student));
	for(int i=0;i<2;i++)
	{
		s1[i]=struct* malloc(sizeof(student));
		printf("enter the rollno\n");
		scanf("%d",&s1[i].rollno);
		printf("enter the name\n");
		scanf(" %s",s1[i].name);
		printf("enter the mark\n");
		scanf("%f",&s1[i].mark);
	}
	for(int i=0;i<2;i++)
	{
		printf("student %d\n",i+1);
		printf("roll no :%d name: %s marks: %f\n",s1[i].rollno,s1[i].name,s1[i].mark);
	}
}
