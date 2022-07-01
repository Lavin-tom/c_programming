//signal
//disable clr+c(2) and clr+/(3) for a process upto 10 seconds?
#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	signal(2,SIG_DFL);
	signal(3,SIG_DFL);
}
int main()
{
	signal(SIGALRM,isr);
	signal(2,SIG_IGN);
	signal(3,SIG_IGN);
	alarm(10);
	while(1);
}
