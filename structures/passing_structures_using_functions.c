//passing structures using functions
//call by value 

#include<stdio.h>
	//structure declaration
	struct student 
	{
		int rollno;
		char name[10];
	};
	int main()
	{
	//structure variable
	struct student s1;
	printf("enter roll no\n");
	scanf("%d",&s1.rollno);
	printf("enter name\n");
	scanf("%s",s1.name);
	printf("entered rollno is %d\n",s1.rollno);
	printf("entered name is %s\n",s1.name);
	
	structure_testing(s1);
}
void structure_testing(struct student s1)
{
printf("inside the function\n");
printf("roll no :%d",s1.rollno);
printf("name: %s",s1.name);	
}
