//dlopen	void *dlopen(const char *filename,int flag);
//dlerror	char *dlerror(void);
//dlsym		void *dlsym(void *handle,const char *symbol);
//dlclose	int dlclose(void *handle)


#include<stdio.h>
#include <dlfcn.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int main()
{
	int a,b,op,res;
	void *handler;
	int (*ptr)(int,int);
	printf("enter a value\n");
	scanf("%d",&a);
	printf("enter b value\n");
	scanf("%d",&b);
	printf("1.ADD 2.SUB 3.MUL \n");
	scanf("%d",&op);
	if(op==1)
	{
		handler=dlopen("libdynamic.so",RTLD_LAZY);
		if(handler==0)
		{
			//printf("library not loaded..\n");
			printf("%s\n",dlerror());
			return;
		}
		ptr=dlsym(handler,"add");
			if(ptr==0)
			{
				//printf("symbol not found\n");
				printf("%s\n",dlerror());
				return;
			}
		res=(*ptr)(a,b);
		printf("add:%d\n",res);
		dlclose(handler);
	}
	else if(op==2)
	{
		handler=dlopen("libdynamic.so",RTLD_LAZY);
		if(handler==0)
		{
			printf("%s\n",dlerror());
			//printf("library not loaded...\n");
			return ;
		}
		ptr=dlsym(handler,"sub");
		if(ptr==0)
		{
			//printf("symbol not found\n");
			printf("%s\n",dlerror());
			return ;
		}
		res=(*ptr)(a,b);
		printf("sub:%d\n",res);
		dlclose(handler);
	}
	else if(op==3)
	{
		handler=dlopen("libdynamic.so",RTLD_LAZY);
		if(handler==0)
			{
				printf("%s\n",dlerror());
				//printf("library not loaded..\n");
				return;
			}
		ptr=dlsym(handler,"mul");
		if(ptr==0)
		{
			//printf("symbol not found\n");
			printf("%s\n",dlerror());
			return ;
		}
		res=(*ptr)(a,b);
		printf("mul:%d\n",res);
		dlclose(handler);
	}
	else
		printf("invalid option\n");
}
