//wap to play flames c program
//there is small bug
//if either names contain multiple character,this program not showing exact result

#include<stdio.h>
int length(char *n);
int compare(char *a,int l1,char *b,int l2);
void selection(int totallength,int count,char *a,char *b);
int main()	
{
	int l1,l2,totallength,count=0;
	char a[10],b[10];
	printf("your name....\n");
	scanf("%s",a);
	printf("your crush name....\n");
	scanf("%s",b);
	
	l1=length(a);

	l2=length(b);

	totallength=l1+l2;
	count=compare(a,l1,b,l2);

	printf("according to FLAMES \n");
	selection(totallength,count,a,b);

}

int length(char *n)
{
	int i,count=0;
	for(i=0;n[i];i++)
	count++;
	return count;	
}
int compare(char *a,int l1,char *b,int l2)
{
	int i,j,count=0,adjust;
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
			{
				if(a[i]==b[j])
				{
					count++;
				}
			}
	}
	return count;
}
void selection(int totallength,int count,char *a,char *b)
{
	int i,select=0;
	i=totallength-(count*2);
	select=i%6;

	switch (select)
	{
		case 0: printf("%s and %s are Friends\n",a,b);
			break;
		case 1: printf("%s and %s are Friends\n",a,b);
			break;
		case 2: printf("%s and %s are in Love\n",a,b);
			break;
		case 3: printf("%s and %s are in Affection\n",a,b);
			break;
		case 4: printf("%s and %s are going to Marry\n",a,b);
			break;
		case 5: printf("%s and %s are Enemies\n",a,b);
			break;
		case 6: printf("%s and %s are Sibblings\n",a,b);	
			break;
	}
}
