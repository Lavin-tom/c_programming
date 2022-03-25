//first prgm of calloc() function
//Dangling_pointer
//calloc()
//free() function


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)calloc(1,sizeof(int));
	printf("p=%u\n",p);

	*p=100; //value assigned to p
	printf("p=%d\n",*p); 

	free(p);
	printf("p=%u\n",p); 

	//after releasing the memory, still pointer point to the same address
	//these type of pointers are called Dangling pointer
	//to avoid this problem,create a NULL pointer
	
	p=0; 
	printf("p=%u\n",p);
}
