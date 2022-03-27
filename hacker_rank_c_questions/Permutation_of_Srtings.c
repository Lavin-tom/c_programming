#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	int i,j,l;
	char str_temp[3][5];

	for(i=1,j=0;i<3;i++,j++)
	{
		strcpy(str_temp[i],s[j]);
	}
	for(i=0,j=3-1;i<3;i++,j++)
	{
		strcpy(str_temp[i],s[j]);
	}
	for(i=0;i<3;i++)
	{
		printf("%s",str_temp[i]);
	}

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
