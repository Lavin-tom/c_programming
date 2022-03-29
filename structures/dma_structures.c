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
	int n;
	printf("enter no of students to be added\n");
	scanf("%d",&n);
	typedef struct student student;
	 student *s1=malloc(n*sizeof(student));
	for(int i=0;i<n;i++)
	{
		printf("enter the rollno\n");
		scanf("%d",&s1[i].rollno);
		printf("enter the name\n");
		scanf(" %s",s1[i].name);
		printf("enter the mark\n");
		scanf("%f",&s1[i].mark);
	}
	for(int i=0;i<n;i++)
	{
		printf("\nstudent %d\n",i+1);
		printf("roll no :%d name: %s marks: %.f\n",s1[i].rollno,s1[i].name,s1[i].mark);
	}
}
