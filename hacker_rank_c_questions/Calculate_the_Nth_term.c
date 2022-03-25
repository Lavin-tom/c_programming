//calculate the n term of series
//not using recursion concept

#include<stdio.h>
int find_nth_term(int n, int a, int b, int c) {
  	
	int i,sum=0;
	for(i=3;i<n;i++)
	{
		sum=a+b+c;
		a=b;
		b=c;
		c=sum;
	}
	return sum;
}
int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int sum = find_nth_term(n, a, b, c);

    printf("%d", sum);
    return 0;
}
