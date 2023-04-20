//queue implementation
#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int rear = -1;
int front = -1;
int running = 1;
int main()
{
    int option;
    int *queue = (int*)malloc(size*sizeof(int));
    while(running)
    {
        printf("1.Add to queue\n2.Remove from queue\n3.Display queue\n4.Exit\n");
        printf("choose any option\n");
        scanf("%d",&option);

        switch(option)
        {
            case 1: 
                        addQueue(queue);
                    break;
            case 2:
                        rmQueue(queue);
                    break;
            case 3: 
                        displayQueue(queue);
                    break;
            case 4: 
                        exitFun();
                        free(queue);
                    break;
        }
        
    }
}