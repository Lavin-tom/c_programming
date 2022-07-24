//wap to find the highest occurance of character in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char string1[10],string2[10];
	int str_length,k=0,count=0;
	printf("enter string\n");
	scanf("%s",string1);
	str_length=strlen(string1);

	//to arrange the character in a accending order
	for(int j=97;j<=122;j++)
	{
		for(int i=0;i<string1[i];i++)
		{
			if(string1[i]==j)
			{
			string2[k]=j;
			k++;	
			//printf("%c ",j);
			}	
		}
	}
	//to print the string
	for(int i=0;i<str_length;i++)
		printf("%c",string2[i]);

	int max=0;
	char max_c;
	for(int i=0;i<str_length;i++)
	{
		count=0;
		for(int j=0;j<str_length;j++)
		{
			if(string2[i]==string2[j])
			{
				count++;
			}
			if(count>max)
			{
				max=count;
				max_c=string2[i];
			}
		}
	}
	printf("\n%c %d\n",max_c,max);
}
