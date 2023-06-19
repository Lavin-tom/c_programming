//not yet completed 

#include<stdio.h>
#include"header.h"
#include"login.c"
#include"changePassword.c"
#include<stdlib.h>
char defPassword[6] = "12345";
int dataLength=0;
int main()
{
    int running = 1,option,status;
    struct student *s = malloc(dataLength * sizeof(student));
    while(running)
    {
        printf("Main Menu\n");
        printf("1.Login\n");
        printf("2.Exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1: status = login(defPassword);
                    if(status)
                    {
                        printf("1.Add Data...\n");
                        printf("2.View Data..\n");
                        printf("3.Remove Data...\n");
                        printf("4.Change Password...\n");
                        scanf("%d",&option);
                        switch(option)
                        {
                            case 1:
                                    addData(dataLength);
                                    break;
                            case 2:
                                    viewData(dataLength);     
                                    break;
                            case 3:
                                    deleteData(dataLength);
                                    break;
                            case 4: 
                                    changePassword(defPassword);
                                    break;
                        }
                    }
                    break;
            case 2: printf("Exiting...\n");
                    running = 0;
                    break;
        }
    }
}