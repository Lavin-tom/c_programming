//sort line based on length in a files

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char **dp,*temp;
	char a[128];
	int line=0,i,j;
	fp=fopen("temp","r+");
	
	if(fp==NULL)
	{
		printf("file not opened\n");
		return 0;
	}
	while(fgets(a,128,fp))
		line++;
	printf("no of lines %d\n",line);
	rewind(fp);

	dp=malloc(sizeof(char *)*line);

	for(i=0;i<line;i++)
		dp[i]=malloc(128*sizeof(char));

	i=0;
	while(fgets(dp[i],128,fp))
		i++;

	for(i=0;i<line;i++)
	{
		for(j=0;j<line-1;j++)
		{
			if(strlen(dp[j])>strlen(dp[j+1]))
			{
				temp=dp[j];
				dp[j]=dp[j+1];
				dp[j+1]=temp;
			}
		}
	}
	rewind (fp);
	for(i=0;i<line;i++)
		fputs(dp[i],fp);

}
