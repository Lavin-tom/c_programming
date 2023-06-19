//100 people with sword puzzle
#include<stdio.h>
#include<stdlib.h>
#define size 100
int main()
{
    int *people = malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++)
        people[i]=1;

    int remaining = size;
    int step = 1;
    while(remaining > 1)
    {
        for(int i=0;i<size;i++)
        {
            if(people[i]==1)
            {
                step++;
                if(step % 2 == 0)
                {
                    people[i]=0;
                    remaining--;
                }
            }
        }
    }
    int lastIndexPerson = 0;
    for(int i=0;i<size;i++)
    {
        if(people[i]==1)
        {
            lastIndexPerson=i;
            break;
        }
    }
    printf("last index person : %d\n",lastIndexPerson);
    free(people);
}