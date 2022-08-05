//array A containing 2+N+2 positive nos, out of which 2*N nos 
//exit in pairr whereas the other two numbers occur exactly once 
//and are distinct. find the other two numbers, return in increasin order

#include<stdio.h>
int main()
{
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	n=2*n+2;
	int A[n],count=0;
	printf("enter array elemnts\n");
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);

	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(A[i]==A[j])
				count++;
		}
		if(count==1)
			printf("%d ",A[i]);
	}
	printf("\n");
}
