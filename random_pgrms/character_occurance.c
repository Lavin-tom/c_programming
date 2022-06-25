//character occurance

#include<stdio.h>
int main()
{
	char ch,str[20];
	int count=0;
	printf("enter the string\n");
	scanf("%s",str);
	
	printf("enter the chara\n");
	scanf(" %c",&ch);
	
	for(int i=0;str[i];i++)
	{
		if(str[i]==ch)
			count++;
	}
	printf("occurance of %c in %s is : %d\n",ch,str,count);
}
