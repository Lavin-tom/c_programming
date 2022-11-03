//sudoku puzzle
//4x4 sudoku
#include<stdio.h>
void print_sudoku(int sudoku[4][4]);
int same_column(int ,int ,int sudoku[][4],int);
int same_raw(int ,int ,int sudoku[][4],int);
int same_square(int ,int ,int sudoku[][4],int);
int solve_sudoku(int ,int,int sudoku[][4]);
int main()
{
	int sudoku[4][4]={0,1,3,2,
			  3,0,4,0,
		          1,0,2,4,
		          0,4,0,0};
	int x=0,y=0;
	
	print_sudoku(sudoku);
	solve_sudoku(sudoku);
}

//to print sudoku
void print_sudoku(int sudoku[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			printf("%d ",sudoku[i][j]);
		printf("\n");
	}
	printf("\n");
}
int same_column(int x,int y,int sudoku[][4],int num)
{
	for(int i=0;i<4;i++)
	{
		if(sudoku[x][i]==num)
			return 1;
	}
	return 0;
}
int same_row(int x,int y,int sudoku[][4],int num)
{
        for(int i=0;i<4;i++)
        {
                if(sudoku[i][y]==num)
                        return 1;
        }
        return 0;
}
int same_square(int x,int y,int sudoku[][4],int num)
{
	if(x>2)
		x=0;
	else 
		x=2;
	if(y>2)
		y=0;
	else
		y=2;

        for(int i=x;i<x+2;i++)
        {
		for(int j=y;j<y+2;j++)
		{
                	if(sudoku[x][i]==num)
                        	return 1;
		}
        }
        return 0;
}
int solve_sudoku(int x,int y,int sudoku[][4],int num)
{
	int tx=0;
	int ty=0;
	if(sudoku[x][y]!=0)
	{
		if(x<3)
			x++;
		else
		{
			x=0;
			y++;
		}
		if(solve_sudoku(x,y,sudoku[][4],num))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if(sudoku[x][y]==0)
	{
		while(num<5)
		{
			if(!solve_square(x,y,sudoku[][4],num), && !solve_raw(x,y,sudoku[][4],num) && !solve_column(x,y,sudoku[][4],num))
			{
					sudoku[x][y]=num;
					if(x<3)
                       				 tx=x+1;
                			else
               				 {
                        			x=0;
                        			ty=y+1;
                		       	 }
                				if(solve_sudoku(tx,ty,sudoku[][4],num)
					num++;
			}
		}
		return 0;

	}
}
