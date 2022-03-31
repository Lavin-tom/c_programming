//basics of union

#include<stdio.h>
union student
{
	int x;  //sharing same memory location 
	int y;  //according to largest datatype
	char z;
};
int main()
{
	union student v={10,20,"a"};
	printf("size of union is %ld\n",sizeof(v));
	printf("%d %d\n", v.x,v.y);
	//value is sharing common memory size so value is same
	v.x=100;
	printf("%d %d\n",v.x,v.y);
}
