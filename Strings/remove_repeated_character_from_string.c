//wap to remove repeated character from a string
//not completed
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	int str_length;
	printf("enter string\n");
	scanf("%s",string);
	str_length=strlen(string);

	for(int i=0;i<str_length;i++)
	{
		int count=0;
		for( int j=0;j<str_length;j++)
			{
				if(string[i]==string[j])
				{
					count++;
					if(count==1)
					//string[i]=string[i+1];
				//	j--;
					printf("%c ",string[i]);
				}
			}
	}
	//printf("%s\n",string);
}

