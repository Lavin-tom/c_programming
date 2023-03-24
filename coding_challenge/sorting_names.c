#include<stdio.h>
#include<string.h>

//global variable
int d = 0;
int i = 0;

void setNames(char names[][10])
{
    printf("enter names\n");
    for(int i=0;i<5;i++)
    {
        scanf("%s",names[i]);
    }
        printf("\n");
}
void getNames(char names[][10])
{
    for(int i=0;i<5;i++)
    {
        printf("%s\n",names[i]);
    }
    printf("\n");
}
void sortNames(char names[][10],int d,int i)
{
    char temp[10];
    for(;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(names[i][d]>names[j][d])
            {
                strcpy(temp,names[i]);      //temp = a  
                strcpy(names[i],names[j]);  //a = b
                strcpy(names[j],temp);      //b = temp
                d = 0;
            }
            else if(names[i][d]==names[j][d])
            {
                //if names first letter is same 
                //check second letter
                d++;
                sortNames(names,d,i);
                return;
            }
        }
    }
}
int main()
{
    char names[5][10];
    setNames(names);
    sortNames(names,d,i);
    getNames(names);
}