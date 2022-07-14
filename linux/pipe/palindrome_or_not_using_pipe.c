//wap to create parent and child process,
//parent process will send data to child process after,
//receiving data by child process, child will check the string is palindrom or not
//if palindrome child will sent palindrome otherwise not 

#include<stdio.h>
#include<string.h>
int main()
{
	int fd[2];
	pipe(fd);
	if(fork()==0)
	{
		int i,j,l,count=0;
		char a[20];
		read(fd[0],a,sizeof(a));
		//to convert every character into oppo case
		l=strlen(a);
		for(i=0,j=l-1;i<l/2;i++,j--)
		{
			if(a[i]==a[j])
				count++;
		}
		if(count==l/2){
			printf("palindrome\n");
			//write(fd[1],a,strlen(a)+1);	
		}
		else
			printf("not palindrom\n");
			
		//write(fd[1],a,strlen(a)+1);
	}
	else
	{
		char b[20];
		printf("enter string\n");
		scanf("%s",b);
		write(fd[1],b,strlen(b)+1);
		//to context switching
		sleep(2);
		read(fd[0],b,sizeof(b));
		printf("data:%s\n",b);
	}
}
