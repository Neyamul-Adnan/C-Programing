/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 29/07/2025
Task   : Write a C program to find maximum and minimum element in an array
*/
#include <stdio.h>

int main()
{
    int n, i, max = 0, min = 0;
    int ma=0, mi=0;

    printf("enter array size: ");
    scanf("%d", &n);

    int marks[n];

    printf("enter array values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    max = min = marks[0];

    for (i = 0; i < n; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
             ma=i;
        }
        if (marks[i] < min)
        {
            min = marks[i];
             mi=i;
        }
    }

    printf("The maximum is: %d\n", max);
    printf("It is located in index[%d]\n\n", ma);
    printf("The minimum is: %d\n", min);
    printf("It is located in index[%d]\n", mi);

    return 0;
}
