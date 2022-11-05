//sudoku 
#include<stdio.h>
void print_sudoku(int sudoku[9][9]);
void solve_sudoku(int sudoku[][9]);
int same_row(int sudoku[][9],int,int,int);
int same_column(int sudoku[][9],int,int,int);
int same_square(int sudoku[][9],int,int,int);
int main()
{
	int sudoku[9][9]={5,3,0,0,7,0,0,0,0,
			  6,0,0,1,9,5,0,0,0,
			  0,9,8,0,0,0,0,6,0,
			  8,0,0,0,6,0,0,0,3,
			  4,0,0,8,0,3,0,0,1,
			  7,0,0,0,2,0,0,0,6,
			  0,6,0,0,0,0,2,8,0,
			  0,0,0,4,1,9,0,0,5,
			  0,0,0,0,8,0,0,7,9};

	print_sudoku(sudoku);
	solve_sudoku(sudoku);
	print_sudoku(sudoku);
	
}
void solve_sudoku(int sudoku[][9])
{
	int ss,sr,sc;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(sudoku[i][j]==0)
			{
				for(int num=1;num<=9;num++)
				{
					if(ss=same_square(sudoku,i,j,num))
					{
						if(sr=same_row(sudoku,i,j,num))
						{
							if(sc=same_column(sudoku,i,j,num))
								sudoku[i][j]=num;
						}
					}
					//if(ss && sr && sc)
					//	sudoku[i][j]=num;	
				}
			}
		}
	}
}
//to check no is not in same square or not
int same_square(int sudoku[][9],int i,int j,int num)
{
	int count=0;
	if(i>2 && i<=5)
		i=3;
	else if(i>5)
		i=6;
	else
		i=0;
	if(j>2 && j<=5)
                j=3;
        else if(j>5)
                j=6;
        else
                j=0;

	for(int k=i;k<=i+2;k++)
	{
		for(int l=j;l<=j+2;l++)
		{
			if(num!=sudoku[k][l])
				count++;
		}
	}
	if(count==9)
		return 1;
	else
		return 0;
}
//to check no is in same raw or not
int same_row(int sudoku[][9],int i,int j,int num)
{
		int count=0;
		for(int n=0;n<=8;n++)
		{
			if(sudoku[i][n]!=num)
				count++;
		}
		if(count==9)
			return 1;
		else
			return 0;

}
//to check no is in same column or not
int same_column(int sudoku[][9],int i,int j,int num)
{
                int count=0;
                for(int n=0;n<=8;n++)
                {
                        if(sudoku[n][j]!=num)
                                count++;
                }
                if(count==9)
                        return 1;
                else
                        return 0;

}
//to print sudoku
void print_sudoku(int sudoku[][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
			printf("%d ",sudoku[i][j]);
		printf("\n");
	}
	printf("\n");
}
