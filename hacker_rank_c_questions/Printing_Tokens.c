// input Learning C is fun
// output 
// Learing
// C
// is 
// fun

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    int i,j=0;
    char temp_s[strlen(s)];

   	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]==32 || s[i]=='\0')
		{
			temp_s[j]='\0';
			printf("%s\n",temp_s);
			j=0;
		}
		else
		{
			temp_s[j]=s[i];
			j++;
		}

	}	
    return 0;
}
