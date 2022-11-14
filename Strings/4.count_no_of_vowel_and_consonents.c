//count no of consonent and vowels in a string
#include<stdio.h>
int main()
{
	char string[20];
	int i,vowel_count=0,consonent_count=0;
	printf("enter string\n");
	scanf("%s",string);

	for(i=0;string[i];i++){
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || 
				string[i]=='A' || string[i]=='E'|| string[i]=='I' || string[i]=='O' || string[i]=='U')
			vowel_count++;
		else
			consonent_count++;
	}
	printf("vowels:%d consonent: %d\n",vowel_count,consonent_count);


}
