//concatenate two string based on user input
#include<stdio.h>
int main()
{
	char string1[20],string2[20],letter;
	int i,j,k,length1=0,length2=0,l;
	printf("enter strings and character\n");
	scanf("%s %s %c",string1,string2,&letter);

	for(i=0;string1[i];i++)
		length1++;
	for(i=0;string2[i];i++)
		length2++;

	char temp[length1+length2];

	for(i=0,k=0;i<length1;i++,k++){
		if(string1[i]==letter){
			for(j=k,l=0;l<length2;j++,l++)
				temp[j]=string2[l];
	
			k=k+length2;
			temp[k]=letter;
		}
		else
			temp[k]=string1[i];
	}
	temp[length1+length2]='\0';
	printf("%s\n",temp);


}
