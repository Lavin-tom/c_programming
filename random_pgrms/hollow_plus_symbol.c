//hollow square pattern 
/*

//for odd value of n
* * * * *
*   *   *
* * * * *
*   *   *
* * * * *
//for even value of n
* * * * * *
*   * *   *
* * * * * *
* * * * * *
*   * *   *
* * * * * *

*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	
	//check for odd no
	if(n%2==1)
	{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==n-1 || j==n-1 || i==n/2 || j==n/2)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	}
	//for even no
	else
	{
	for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        if(i==0 || j==0 || i==n-1 || j==n-1 || i==n/2-1 || i==n/2 || j==n/2-1 || j==n/2 )
                                printf("* ");
                        else
                                printf("  ");
                }
                printf("\n");
        }
	}
	
}
