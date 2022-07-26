//wap to remove repeated character from a string
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	int str_length,count=0;
	printf("enter string\n");
	scanf("%s",string);
	str_length=strlen(string);

	for(int i=0;i<str_length;i++)
	{
		for( int j=0;j<str_length;j++)
			{
				if(string[i]==string[j])
				{
					count++;
					if(count>1)
					{
						//left shift if duplicate found
						for(int k=j;k<str_length;k++)
						string[k]=string[k+1];
					}
				}
			}
		count=0;
	}
	printf("%s\n",string);
}

