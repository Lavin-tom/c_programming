//swap the nibble
//swapping of four bits from the digits
#include<stdio.h>
int main()
{
	int num,t1,t2;
	printf("enter num\n");
	scanf("%d",&num);

	for(int i=7;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	for(int i=7,j=3;i>=4;i--,j--){
		t1=num>>i&1;
		t2=num>>j&1;
		if(t1!=t2)
		{
			num=num^(1<<i);	//xor operation to compliment 
			num=num^(1<<j);
		}
	}
	for(int i=7;i>=0;i--){
                printf("%d",num>>i&1);
        }
	printf("\n");
}
