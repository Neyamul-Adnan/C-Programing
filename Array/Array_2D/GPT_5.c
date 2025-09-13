/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Hospital Bed Management

A hospital has wards, each with a fixed number of beds.

Represent availability with a 2D array (0 = empty, 1 = occupied).

Input patient admission and discharge data.

Display how many beds are available per ward.

Find the ward with maximum occupancy.
*/

#include <stdio.h>
#define ward 3
#define bed 5

int main()
{
    int choice, hospital[ward][bed] = {0};
    int w, b;

    do
    {
        printf("\n-----Hospital Bed Management System-----\n");
        printf("1. Show Beds\n");
        printf("2. Admit Patient\n");
        printf("3. Discharge Patient\n");
        printf("4. Check Available Beds Per Ward\n");
        printf("5. Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Bed Layout(0 = Empty, 1 = Occupied)\n");
            for (w = 0; w < ward; w++)
            {
                printf("Ward %d = ", w + 1);
                for (b = 0; b < bed; b++)
                {
                    printf("%d ", hospital[w][b]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter Ward and Bed no: ");
            scanf("%d %d", &w, &b);
            if (hospital[w - 1][b - 1] == 0)
            {
                hospital[w - 1][b - 1] = 1;
                printf("\nPatient Admitted Successfully");
            }
            else
            {
                printf("\nBed Already Occupied");
            }
            break;
        case 3:
            printf("Enter Ward and Bed no to discharge: ");
            scanf("%d %d", &w, &b);
            if (hospital[w - 1][b - 1] == 1)
            {
                hospital[w - 1][b - 1] = 0;
                printf("\nPatient Discharged Successfully");
            }
            else
            {
                printf("\nBed Already Empty");
            }
            break;
        case 4:
            for (w = 0; w < ward; w++)
            {
                int available = 0;
                for (b = 0; b < bed; b++)
                {
                    if (hospital[w][b] == 0)
                        available++;
                }
                printf("\nWard %d has %d available seats", w + 1, available);
            }
            break;
        }

    } while (choice != 5);

    return 0;
}
