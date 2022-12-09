/* average of two nos */ 
/* multiple file compilations */ 
/* extern */
#include<stdio.h>
/* #include "average.c" */
extern float average(int* ,int*);
int main(){
int a,b;
float avg;
printf("enter two nos\n");
scanf("%d %d",&a,&b);

avg=average(&a,&b);
printf("average of %d and %d is %.2f\n",a,b,avg);
}
