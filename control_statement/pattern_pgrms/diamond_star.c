//pattern prgm
//diamond shaped star
//   *
//  * * 
// * * *   
//* * * *
// * * *
//  * *
//   * 

#include<stdio.h>
int main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);

	int k=n-1;
	//for upper pyramid
	for(int i=0;i<n;i++)
	{
		//for space
		for(int j=1;j<=k;j++)
		{
			//printf("-");
			printf(" ");
		}
		//for star
		for(int m=0;m<=i;m++)
		{
			printf("* ");
		}
		k--;
		printf("\n");
	}
	k=0;
	//for lower
       for(int i=n-1;i>0;i--)
        {
                for(int j=0;j<=k;j++)
                {
                        //printf("-");
			printf(" ");
                }
                for(int m=0;m<i;m++)
                {
                        printf("* ");
                }
                k++;
                printf("\n");
        }

}
