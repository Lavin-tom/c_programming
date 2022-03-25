//find the occurance of no and print
//input - a11472o5t6
//output - 0 2 1 0 1 1 1 1 0 0
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    char arr[50];
	scanf("%s",arr);

	int i,j,count=0;
	for(i=48;i<=57;i++)
	{
		for(j=0;j<strlen(arr);j++)
		{
			if(arr[j]==i)
			 count++;	
		}
		printf("%d ",count);
		count=0;
	}	
    return 0;
}

