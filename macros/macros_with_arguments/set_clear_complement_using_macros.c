#include<stdio.h>
#define set(n,bp) (n|(1<<bp))
#define clear(n,bp) (n&~(1<<bp))
#define compliment(n,bp) (n^(1<<bp))

int main()
{
    int n,bp;
    printf("enter n and bp");
    scanf("%d %d",&n,&bp);      //1010  10
    printf("%d\n",set(n,bp));           //1110  14
    printf("%d\n",clear(n,bp));         //1010  10
    printf("%d\n",compliment(n,bp));    //1110  14
}
