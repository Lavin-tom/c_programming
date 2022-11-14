//check string is palindrome or not
#include<stdio.h>
int main()
{
	char string[20];
	int i,j,length=0,count=0;
	printf("enter strings\n");
	scanf("%s",string);

	for(i=0;string[i];i++)
		length++;

	//to find character
	for(i=0,j=length-1;i<length/2;i++,j--){
		if(string[i]==string[j])
			count++;
	}

	if(count==length/2)
		printf("%s is palindrome\n",string);
	else
		printf("%s is not a palindrome\n",string);

}
