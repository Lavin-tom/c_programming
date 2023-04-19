#include <stdio.h>
extern int rear;
void displayQueue(int queue[])
{
    printf("\n________________________________\n");
    if (rear == -1)
        printf("queue is empty...\n");
    else
    {
        printf("current queue\n");
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}