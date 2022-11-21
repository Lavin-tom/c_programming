//wap to count the duplicate element and display
#include<stdio.h>
int main()
{
	int arr[7],arr2[14],count=0,k=0,n=1,m=0,sort[2][7];
	printf("enter array element\n");
	for(int i=0;i<7;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<7;i++){
		for(int j=i;j<7;j++){
			if(arr[i]<arr[j]){
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
		}
	}
	}
	printf("after sorting\n");
        for(int i=0;i<7;i++)
                printf("%d ",arr[i]);

	printf("\n");
	for(int i=0;i<7;i++){
                	 for(int j=0;j<7;j++){        
				if(arr[i]==arr[j])
					count++;
			}
                                //printf("%d ",count);
                        sort[m][i]=arr[i];
                        sort[n][i]=count;
                        count=0;
	}	
	printf("\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<7;j++)
                	printf("%d ",sort[i][j]);
	printf("\n");
	}

	//two d array sorting
	for(int i=0;i<7;i++){
                for(int j=i;j<7;j++){
                        if(sort[n][i]<sort[n][j]){
                                sort[n][i]=sort[n][i]+sort[n][j];
                                sort[n][j]=sort[n][i]-sort[n][j];
                                sort[n][i]=sort[n][i]-sort[n][j];

				sort[m][i]=sort[m][i]+sort[m][j];
                                sort[m][j]=sort[m][i]-sort[m][j];
                                sort[m][i]=sort[m][i]-sort[m][j];
                }
        }
        }

	printf("\n");
        for(int i=0;i<1;i++){
                for(int j=0;j<7;j++)
                        printf("%d ",sort[i][j]);
        printf("\n");
        }
}
