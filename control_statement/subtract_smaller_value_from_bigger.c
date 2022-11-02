//subtract smaller value from bigger
#include<stdio.h>
int main()
{
        int a,b;
        printf("enter two nos\n");
        scanf("%d %d",&a,&b);

	if(a>b)
		printf("%d is bigger than %d a-b=%d\n",a,b,a-b);
	if(b>a)
		printf("%d is bigger than %d b-a=%d\n",b,a,b-a);

}
