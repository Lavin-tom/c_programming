//hollow right angle triangle
/*pattern like this if n=5
 	*
	* *
	*   *
	*     *
	* * * * *
 */
#include<stdio.h>
int main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i==j || j==0 ||i==n-1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
