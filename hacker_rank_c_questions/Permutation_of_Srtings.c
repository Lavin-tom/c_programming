#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	int i,j;
	char str_temp[n];
	str_temp[0]=s[n];
	for(i=0;i<n;i++)
	{
		printf("printing inside the loop %s\n",s[i-1]);
		str_temp[i+0]=s[i];	
	}
	str_temp[i]='\0';
	printf("%s\n",str_temp);
	return 0;

}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
