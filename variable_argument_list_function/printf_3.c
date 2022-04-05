//variable argument list function 
//printf

#include<stdio.h>
int main()
{
	char s[]="hello\n";
	int i;
	for(i=0;printf(s+i);i++);
}

//s+i=0 base address
//hello\n
//i=1,s+1= base address+1
//ello\n
//i=2 s+2 base address+2
//llo\n
//i=3 s+3 base address+3
//lo\n
//i=4 s+4 base address+4
//o\n
//i=5 s+5 base address+5
//\n 
//i=6 s+6 base address+6
//0 conditin false
