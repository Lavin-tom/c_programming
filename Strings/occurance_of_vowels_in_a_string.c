//delete vowels from a string
//occurance of vowels in a string
#include<stdio.h>
int str_length(char[]);
int main()
{
	char string[20];
	int length1,length2;
	printf("enter string\n");
	scanf("%s",string);
	
	length1=str_length(string);
	printf("initial string length: %d \n",length1);

	for(int i=0;string[i];i++)		
	{
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o'|| string[i]=='u')
		{
			//left shift
			for(int j=i;string[j];j++)
			{
				string[j]=string[j+1];
			}
			i--;
		}
	}
	length2=str_length(string);
	printf("string length after delete vowels: %d\n",length2);
	printf("string after delete: %s\n",string);
	printf("total no of vowels are:%d\n",length1-length2);
}

int str_length(char string[])
{
	int length=0,i=0;
	while(string[i])
	{
		length++;
		i++;
	}
	return length;
}
