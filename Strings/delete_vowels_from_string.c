//delete vowels from a string
#include<stdio.h>
int main()
{
	char string[20];
	printf("enter string\n");
	scanf("%s",string);
	
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
	printf("%s\n",string);
}
