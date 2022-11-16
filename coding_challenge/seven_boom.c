//seven boom!
//if array contain integer 7 then return seven Boom!

#include<stdio.h>
int main()
{
	int array[5]={0},d,flag=0;
	printf("enter array element\n");
	int n=sizeof(array)/sizeof(int);
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);

	for(int i=0;i<n;i++){

	while(array[i]>0){
		d=array[i]%10;
		if(d==7){
			printf("\nBoom!\n");
			flag=1;
			break;
		}
		array[i]/=10;
	}
	}
	if(flag==0)
		printf("there is no 7 in the array\n");
}
