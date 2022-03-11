//static storage class life

#include<stdio.h>
void fun();
int main()
{
	fun();
	fun();
	fun();

}
void fun()
{
	static int i=10;
	printf("value of i is %d\n",i);
	i++;
	return;
}
//life of static storage class is remain until the main fucntion is over /or program is termianted
//output is like 10 11 12 
//i value is increment because of static storage class it remain same until the program is terminated
//memory is not unreserved 
//but the execution of static int i=10 is not done after the first execution.
