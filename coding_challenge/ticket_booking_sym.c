//train booking system
//simple implementation 
//not yet completed 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// global variables
int running = 1, option, user_pnr;
char search[20];
char availableTrain[5][20];
static int current_booking = 0;
const int capacity = 5;
char passengerName[20];
int pnrArray[5];

struct Booking
{
    int pnr;
    char name[20];
    char train[20];
} booking[5];

void initBooking()
{
    // default list of trains
    strcpy(availableTrain[0], "Vanchinadu Exp");
    strcpy(availableTrain[1], "Venad Exp");
    strcpy(availableTrain[2], "Chennai Exp");
    strcpy(availableTrain[3], "Malabar Exp");
    strcpy(availableTrain[4], "Guruvayoor Exp");
    for (int i = 0; i < capacity; i++)
    {
        pnrArray[i] = rand() % 100;
    }
}
void showAvailableTrain()
{
    printf("available trains\n");
    printf("_________________\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d.  %s\n", i + 1, availableTrain[i]);
    }
}
int serachTrains()
{
    int option;
    showAvailableTrain();
    printf("\nchoose any train....\n");
    printf("press 0 to exit from this menu\n");
    scanf("%d", &option);
    if (option != 0)
        return option;
    else
    {
        printf("logic to previous menu! not implemented\n");
        exit(0);
    }
}

void bookingTrain()
{
    int choice;
    choice = serachTrains();
    if (current_booking <= capacity)
    {
        printf("Enter name\n");
        scanf("%s", passengerName);
        printf("\nBooking sucess\n");
        printf("_____________________________\n");
        printf("Booking details\n");
        printf("Name: %s\n", passengerName);
        strcpy(booking[current_booking].name, passengerName);
        printf("PNR NO: %d\n", pnrArray[current_booking]);
        booking[current_booking].pnr = pnrArray[current_booking];
        printf("Train: %s\n", availableTrain[choice - 1]);
        strcpy(booking[current_booking].train, availableTrain[choice - 1]);
        current_booking++;
    }
    else
    {
        printf("NO seats available...\n");
        exit(0);
    }
}
void passengerDetails()
{
    printf("Passenger details\n");
    printf("___________________\n");
    for (int i = 0; i < capacity; i++)
    {
        printf("%s  ", booking[i].name);
        printf("%d ", booking[i].pnr);
        printf("%s ", booking[i].train);
        printf("\n");
    }
}
void cancelTrain()
{
    int j;
    printf("enter pnr no to cancel\n");
    scanf("%d", &user_pnr);
    printf("Searching for pnr no\n");
    for (j = 0; j < capacity; j++)
    {
        if (booking[j].pnr == user_pnr)
        {
            printf("PNR found....\n");
            strcpy(booking[j].name, "cancelled");
            booking[j].pnr = 0;
            strcpy(booking[j].train, "cancelled");
            printf("Ticket cancelled...\n");
            break;
        }
    }
    if (j==capacity)
        printf("PNR no not found.. try again\n");
}

int main()
{
    initBooking();
    while (running)
    {
        printf("_______________________________________\n");
        printf("welcome :)\n");
        printf("1.Book a ticket\n");
        printf("2.Cancel a ticket\n");
        printf("4.Passenger Details\n");
        printf("5.Exit\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nBooking....");
            bookingTrain();
            break;
        case 2:
            printf("\nCancel ....");
            cancelTrain();
            break;
        case 3:
            printf("\nupdate available train\n");
            // updataAvailableTrain();
            break;
        case 4:
            passengerDetails();
            break;
        default:
            printf("Exiting .....\n");
            exit(0);
            break;
        }
    }
}