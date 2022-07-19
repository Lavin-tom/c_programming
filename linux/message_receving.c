//message receiving
#include<stdio.h>
#include<sys/msg.h>
#include<string.h>
struct msgbuf
{
	long mtype;
	char mtext[20];
};

int main(int argc,char *argv[])
{
	int id,ret;
	struct msgbuf v;
	id=msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("msgget");
		return 0;
	}
	if(argc!=2)
	{
		printf("./a.out mtype\n");
		return 0;
	}
	ret=msgrcv(id,&v,sizeof(v.mtext),(atoi[1]),0);
	if(ret==-1)
	{
		perror("msgrcv");
		return 0;
	}
	printf("message reading successfully mtype:%d msg:%s\n",mtype,v.mtext);
}
