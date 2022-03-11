//auto storage class life

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
	//by default int value is consider as auto storage class
	int i=10;
	printf("value of i is %d\n",i);
	i++;
	return;
}
//life of auto storage class is over when fucntion is over
//out put is like 10 10 10 
//i value is increment but after the funtion over memory is unreserved 
//so value of i remain 10
