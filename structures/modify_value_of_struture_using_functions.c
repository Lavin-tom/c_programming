//passing structure using fuctions
#include<stdio.h>
	struct A
	 {
	int x;
	int y;
	 };

 void fun(struct A *p);
 int main()
 {
	struct A v={10,20};
	fun(&v);

 	printf("after fun call :%d %d\n",v.x,v.y);
 }

 void fun(struct A *v)
 {
 printf("in function body\n");
 printf("x:%d y:%d\n",v->x,v->y);
 v->x=100;
 v->y=200;

 return;

 }
