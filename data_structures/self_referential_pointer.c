#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[10];
    struct student *link;
};
struct student *addLast(struct student *);
void display(struct student *);
int main()
{
    int option, running = 1;
    struct student *head = NULL;
    while (running)
    {
        printf("choose any option\n1.Add_last\n2.Display\n3.Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            head = addLast(head);
            break;
        case 2:
            display(head);
            break;
        default:
            running = 0;
            break;
        }
    }
}
struct student *addLast(struct student *ptr)
{
    struct student *newnode = NULL;
    newnode = (struct student *)calloc(1, sizeof(struct student));
    if (newnode == NULL)
        printf("node not created\n");
    else
    {
        printf("enter rollno and name\n");
        scanf("%d %s", &newnode->roll, newnode->name);

        if (ptr == NULL)
            ptr = newnode;
        else
        {
            while (ptr->link != NULL)
            {
                ptr = ptr->link;
            }
            ptr->link = newnode;
        }
    }
    return ptr;
}
void display(struct student *ptr)
{
    if (ptr == NULL)
        printf("list is empty\n");
    else
    {
        while (ptr)
        {
            printf("Rollno: %d Name: %s\n", ptr->roll, ptr->name);
            ptr = ptr->link;
        }
    }
}