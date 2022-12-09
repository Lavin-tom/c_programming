/* balanced word */
/* We can assign a value to each character in a word, 
 * based on their position in the alphabet (a = 1, b = 2, ... , z = 26).
 * A balanced word is one where the sum of values on the left-hand side of the word equals the
 * sum of values on the right-hand side. 
 * For odd length words, the middle character (balance point) is ignored. */

#include<stdio.h>
#include<string.h>
int main(){
	char word[10],length,fh=0,sh=0;
	printf("enter string\n");
	scanf("%s",word);

	length=strlen(word);
	char j=(length/2);
		for(int i=0;i<length/2;i++,j++){
			fh=fh+word[i]-96;
			sh=sh+word[i]-96;
		}
		if(fh==sh)
			printf("Balanced word\n");
		else
			printf("Unbalanced word\n");
}
