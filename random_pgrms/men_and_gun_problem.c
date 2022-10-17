//wap to men and gun/sword game solution
//puzzle 1: 100 people standing in a circle in a order 1 to 100
//NO.1 has a sword/gun. He kill the next person(ie NO.2) and give the sword to the next (ie NO.3). 
//All people do the same until only 1 survives.
//which number survives at the last?
#include<stdio.h>
int main()
{
	int a_size;
	printf("enter array size\n");
	scanf("%d",&a_size);

	int array[a_size],p,m,ans;

	//adding elements to array
	printf("enter array elements\n");
	for(int i=0;i<a_size;i++)
		array[i]=i+1;

	//to find the power of two just higher than N value 
	for(int i=0;i<a_size;i++)
	{
		if((i&i-1)==0)
		{
		printf("%d ",i);
		p=i*2;
		}
	}
	//printf("p : %d\n",p);
	//simble logic to find the last surviver
	m=(p-1)-a_size;
	m=m*2;
	ans=(p-1)-m;
	printf("ans %d\n",ans);
}
