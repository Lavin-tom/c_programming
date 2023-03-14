//no to convert decimal to binary
//set the bit and clear the bit using macros
#include <stdio.h>
#define set (n|(1<<bp))
#define clear (n&~(1<<bp))

//to print the binary value of a number
void printBinary(int n)
{
    int d;
    for(int i=7;i>=0;i--)
    {
        d=n>>i&1;
        printf("%d",d);
    }
    printf("\n");
}
int main()
{
    int n,bp;
    printf("enter no\n");
    scanf("%d",&n);

    printBinary(n);

    printf("\nenter bit position to set\n");
    scanf("%d",&bp);
    n=n|(1<<bp);            //set the bit
    printBinary(n);
    printf("\nenter bit position to clear\n");
    scanf("%d",&bp);
    n=n&~(1<<bp);           //clear the bit
    printBinary(n);
    n = set;                //using macros
    printBinary(n);
    n = clear;              //using macros
    printBinary(n);
    return 0;
}
