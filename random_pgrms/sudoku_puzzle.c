//sudoku puzzle
//trying to solve sudokku using c
//unsolved one
#include<stdio.h>
int main()
{
	int a[4][4],flagr=0,flagc=0;
	printf("enter sudokku initial value, keep zero for vaccant value\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	}
	printf("unsolved puzzle\n");
	for(int i=0;i<4;i++)
        {
                for(int j=0;j<4;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
	for(int i=0;i<4;i++)
        {
                for(int j=0;j<4;j++)
		{
			if(a[i][j]==0)
			{
				for(int m=1;m<=4;m++)
				{
					//to box searching
					if(a[0][0]!=m && a[0][1]!=m && a[1][0]!=m && a[1][1]!=m)
					{
						for(int r=0;r<4;r++)
						{
							if(a[r][j]!=m)
								flagr=1;
						}
						 for(int c=0;c<4;c++)
                                                {
                                                        if(a[i][c]!=m)
                                                                flagc=1;
                                                }
						 if(flagr==1 && flagc==1)
							a[i][j]=m;
					}
					flagr=0;
					flagc=0;	
				}
				for(int m=1;m<=4;m++)
                                {
                                        //to box searching 2
                                        if(a[0][2]!=m && a[0][3]!=m && a[1][2]!=m && a[1][3]!=m)
                                        {
                                                for(int r=0;r<4;r++)
                                                {
                                                        if(a[r][j]!=m)
                                                                flagr=1;
                                                }
                                                 for(int c=0;c<4;c++)
                                                {
                                                        if(a[i][c]!=m)
                                                                flagc=1;
                                                }
                                                 if(flagr==1 && flagc==1)
                                                        a[i][j]=m;
                                        }
                                        flagr=0;
                                        flagc=0;
                                }
				for(int m=1;m<=4;m++)
                                {
                                        //to box searching 2
                                        if(a[2][0]!=m && a[2][1]!=m && a[3][0]!=m && a[3][1]!=m)
                                        {
                                                for(int r=0;r<4;r++)
                                                {
                                                        if(a[r][j]!=m)
                                                                flagr=1;
                                                }
                                                 for(int c=0;c<4;c++)
                                                {
                                                        if(a[i][c]!=m)
                                                                flagc=1;
                                                }
                                                 if(flagr==1 && flagc==1)
                                                        a[i][j]=m;
                                        }
                                        flagr=0;
                                        flagc=0;
                                }
				for(int m=1;m<=4;m++)
                                {
                                        //to box searching 2
                                        if(a[2][0]!=m && a[2][1]!=m && a[3][0]!=m && a[3][1]!=m)
                                        {
                                                for(int r=0;r<4;r++)
                                                {
                                                        if(a[r][j]!=m)
                                                                flagr=1;
                                                }
                                                 for(int c=0;c<4;c++)
                                                {
                                                        if(a[i][c]!=m)
                                                                flagc=1;
                                                }
                                                 if(flagr==1 && flagc==1)
                                                        a[i][j]=m;
                                        }
                                        flagr=0;
                                        flagc=0;
                                }
			}
		}
        }

	printf("solved puzzle\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
