//wap to delete the repeated chara in the string

#include<stdio.h>
void delete_duplicate(char *string);
int main()
{
	char string[15];
	printf("enter the string\n");
	scanf("%s",string);
	
	//function call
	delete_duplicate(string);
	printf("%s\n",string);
}

//function body
	void delete_duplicate(char *string)
{
	int i,j,k;
	for(i=0;string[i];i++)
	{
		for(j=i+1;string[j];j++)
		{
			//checking for value same 
			if(string[i]==string[j])
				{
					//if the value same left shifted all the values
					for(k=j;string[k];k++)
					string[k]=string[k+1];
					i--;
				}
		}			
	}

}


