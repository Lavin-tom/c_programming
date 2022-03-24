/*-------------------------------------------- 

Task
Given a five digit integer, print the sum of its digits.
Input Format
The input contains a single five digit number, .
Output Format
Print the sum of the digits of the five digit number.
Sample Input 0
10564
Sample Output 0
16

---------------------------------------------*/
#include <stdio.h>
int main() {
	
    int n,f,sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        f=n%10;
        sum=sum+f;
        n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}
