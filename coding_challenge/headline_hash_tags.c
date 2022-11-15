//Headline Hash Tags
//Write a function that retrieves the top 3 longest words of a newspaper headline 
//and transforms them into hashtags. 
//If multiple words tie for the same length, retrieve the word that occurs first.
//not yet completed only get highest no
#include<stdio.h>
#include<string.h>
int main()
{
	char string[50];
	printf("enter string\n");
	scanf("%[^\n]s",string);
	int l=strlen(string);	
	int word_length[10]={0},count=0,k=0,temp;
	for(int i=0;i<l;i++){
		if(string[i]==' ' || i==l-1){
			if(i==l-1)
                                count++;
			word_length[k]=count;
			k++;
				count=0;
		}
		else
			count++;
	}
	for(int i=0;word_length[i];i++)
		printf("%d ",word_length[i]);
	printf("\n");

	for(int i=0;word_length[i];i++){
		for(int j=i;word_length[j];j++){
			if(word_length[i]<word_length[j]){
				temp=word_length[i];
				word_length[i]=word_length[j];
				word_length[j]=temp;
			}
		}
	}
	for(int i=0;word_length[i];i++)
		printf("%d ",word_length[i]);
	printf("\n");

		count=0;
		int m=0,index=0;
		int i=0;
		for(i=0;i<3;i++)
		{
			count=0;
			//index=0;
		int d=word_length[i];
		for(int j=0;j<l;j++){
			if(string[j]!=' '){
				count++;
				//printf("count:%d d:%d\n",count,d);
				if(count==1){
					index=j;
					//printf("index: %d\n",index);
				}
				if(count==d){
				      for(int k=index;k<index+d;k++)
					      		printf("%c",string[k]);
				      	printf("\n");
				     	 count=0;
					 break;
					}
				}
			else
				count=0;
			
			}
		}
	printf("\n");
}
