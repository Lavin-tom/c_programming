//track the robot
//This robot roams around a 2D grid. It starts at (0, 0) facing North. After each time it moves, the robot rotates 90 degrees clockwise.
//Given the amount the robot has moved each time, you have to calculate the robot's final position.

//To illustrate, if the robot is given the movements 20, 30, 10, 40 then it will move:

//20 steps North, now at (0, 20)
//30 steps East, now at (30, 20)
//10 steps South. now at (30, 10)
//40 steps West, now at (-10, 10)
//...and will end up at coordinates (-10, 10).

#include<stdio.h>
int main()
{
	int n,e,s,w;
	printf("enter directions north east south and west\n");
	scanf("%d %d %d %d",&n,&e,&s,&w);

	int x=0,y=0;
	y=y+n;
	printf("after moving to north:(%d,%d)\n",x,y);
	
	x=x+e;
	printf("after moving to east:(%d,%d)\n",x,y);
        
	printf("after moving to south:(%d,%d)\n",x,y);
        y=y-s;

	printf("after moving to west:(%d,%d)\n",x,y);
        x=x-w;

	printf("final positon: (%d,%d)\n",x,y);
}
