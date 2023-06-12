//coding question
//we have 540 tyres, we need to build 200 vechicles including two wheeler and four wheeler
//find the maximum possible combination of two wheeler and four wheeler
#include <stdio.h>
#include<stdlib.h>
void find(int,int);
int main()
{
    int tyre = 540,tw=0,fw=200;
    find(tw,fw);
    return 0;
}
void find(int tw,int fw)
{

    int sum = (tw*2)+(fw*4);
    if(sum!=540)
    {
        tw+=1;
        fw-=1;
        find(tw,fw);
    }
    if(sum==540){
        printf("Two wheeler: %d Four wheeler: %d\n",tw,fw);
        exit(0);
    }
}
