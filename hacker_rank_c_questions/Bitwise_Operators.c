/*---------------------------------
Example
input n=3,k=3
i
T
he results of the comparisons are below:


a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
For the and comparison, the maximum is 2 
For the or comparison, none of the values is less than k, so the maximum is 0.
For the xor comparison, the maximum value less than  is k . The function should print: 1

2
0
2
------------------------------------------*/
#include<stdio.h>

//Complete the following function.


void calculate_the_maximum(int n, int k)
{
	int i,j,a,b,or,and,xor,temp_and=0,temp_or=0,temp_xor=0;
 	for(i=1;i<n;i++)
	       {
		 for(j=i+1;j<=n;j++)
		 {
			a=i;
			b=j;
			and=a&b;
			if(and>temp_and && and<k)
				temp_and=and;
			or=a|b;
			if(or>temp_or && or<k)
				temp_or=or;

			xor=a^b;
			if(xor>temp_xor && xor<k)
				temp_xor=xor;

		 }
	       }
			printf("\n%d\n",temp_and);
			printf("%d\n",temp_or);
			printf("%d\n",temp_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
