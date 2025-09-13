/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Cinema Ticket Booking System

A cinema hall has 10 rows and 10 seats per row.

Use a 2D array where 0 = empty and 1 = booked.

Allow users to:

Book a seat.

Cancel a booking.

Show seat layout (like a seating chart).
*/

#include <stdio.h>
#define row 10
#define col 10

int main()
{

    int arr[row][col] = {0};
    int r, c, choice;

    do
    {
        printf("\n-----Cinema Ticket Booking System-----\n");
        printf("1. Show seats\n");
        printf("2. Book seat\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Seats layout (0 = empty; 1 = booked)\n");
            for (r = 0; r < row; r++)
            {
                for (c = 0; c < col; c++)
                {
                    printf("%d ", arr[r][c]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Enter row and column to book: ");
            scanf("%d %d", &r, &c);
            if (arr[r-1][c-1] == 0)
            {
                arr[r-1][c-1] = 1;
                printf("\nSeat booked successfully");
            }
            else
            {
                printf("\nSeat already booked");
            }
            break;
            case 3:
            printf("Enter row and column to cancel: ");
            scanf("%d %d", &r, &c);
            if (arr[r-1][c-1] == 1)
            {
                arr[r-1][c-1] = 0;
                printf("\nBooking cancelled successfully");
            }
            else
            {
                printf("\nSeat not booked yet");
            }
            break;
        }
    } while (choice != 4);

    return 0;
}
