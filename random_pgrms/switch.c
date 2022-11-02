//switch
#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	printf("enter two nos\n");
	scanf("%d %d",&i,&j);

	printf("a.addition b.sub c.mul d.div\n");
	scanf(" %c",&ch);

	switch(ch)
	{
		case 'a': printf("%d + %d = %d\n", i,j,i+j);
			  break;
		case 'b': printf("%d - %d = %d\n", i,j,i-j);
                          break;
		case 'c': printf("%d * %d = %d\n", i,j,i*j);
                          break;
		case 'd': printf("%d / %d = %d\n", i,j,i/j);
                          break;
		default : printf("invalid option\n");			  
	}
}
