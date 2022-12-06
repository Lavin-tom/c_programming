//matrix right rotation
#include<stdio.h>
int main()
{
	int arr[2][2],arr2[2][2],sum=0,temp2[2][2];
	printf("enter array elements\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int temp[2][2]={0,1,1,0};

	for(int i=0;i<2;i++){
           for(int j=0;j<2;j++){
        	printf("%d ",arr[i][j]);
                	}
                	printf("\n");
       		 }
	printf("\n");
	// transpose
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			temp2[i][j]=arr[j][i];
		}
	}
	
	printf("\n");
	//matrix multiplication start here
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
				{
				sum=sum+temp2[i][k]*temp[k][j];
				}
			arr2[i][j]=sum;
			sum=0;
		}
	}



	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
	printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}
