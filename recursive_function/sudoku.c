//sudoku 
//Back tracking algorithm
//recursion

#include<stdio.h>
#include<stdlib.h>
void get_sudoku(int sudoku[][9]);
void print_sudoku(int sudoku[9][9]);
int solve_sudoku(int sudoku[][9],int,int);
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
	int option;
	printf("Enter option to continue\n");
	printf("1. Add a 9x9 sudoku to get solution\n2. Go for default sudoku\n3. Exit\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1: printf("Enter your sudoku...\n1.write left to right with vaccant space as zero\n2.seperate each digits with space or enter\n");
			get_sudoku(sudoku);
			break;
		case 2: printf("You selected system sudoku as demo\n");
			break;
		case 3: exit(0);
	}
	int x=0,y=0;
	printf("\tpuzzle\n\n");
	print_sudoku(sudoku);
	solve_sudoku(sudoku,x,y);
	printf("\tsolution\n\n");
	print_sudoku(sudoku);
}

//solve sudoku function
int solve_sudoku(int sudoku[][9],int x,int y)
{
	int num=1,tx=0,ty=0;
	int ss,sc,sr;

	//already filled space
	if(sudoku[x][y] != 0)
	{
		//reach at the end
		if(x==8 && y==8)
			return 1;
		if(x<8)
			x++;
		else
		{
			x=0;
			y++;
		}
		if(solve_sudoku(sudoku,x,y))
			return 1;
		else
			return 0;
	}
	//to fill vaccant space
	if(sudoku[x][y] == 0)
	{
		//check for each num num start from 1 to 9
		while(num<10)
		{
			 //same square return 1 if no duplicate elements in the square
			 ss=same_square(sudoku,x,y,num);
			 //same raw return 1 if no duplicate elements in the raw
                         sr=same_row(sudoku,x,y,num);
			 //same column return 1 if no duplicate elements in the column
                         sc=same_column(sudoku,x,y,num);
				
			 	//if all are return 1 means we can add element to that postion
                               if(ss && sr && sc)
				{
					//add value to vaccant slot
                                        sudoku[x][y]=num;

					//back tracking algorithm 
						 if(x==8 && y==8)
                        				return 1;
						   if(x<8)
							   //temp x and y variable 
							tx = x+1;
						   else
					           {
							tx=0;
							ty=y+1;
					           }
					if(solve_sudoku(sudoku,tx,ty))
						return 1;
			       	}
		     num++;
		}
		sudoku[x][y]=0;
		return 0;
	}
}
//function to check no is not in same square or not
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
//function to check no is in same raw or not
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
//function to check no is in same column or not
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
//function to print sudoku
void print_sudoku(int sudoku[][9])
{
	for(int i=0;i<9;i++)
	{
		 if(i==3 || i==6)
                        printf("- - - - - - - - - - -\n");
		
		 for(int j=0;j<9;j++)
		{
			if(j==3 || j==6)
				printf("| ");
			
			printf("%d ",sudoku[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void get_sudoku(int sudoku[][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			scanf("%d",&sudoku[i][j]);
		}
	}
}
