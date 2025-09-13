/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 29/07/2025
Task   : Write a C program to read and print elements of array
*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("enter array size: ");
    scanf("%d", &n);

    int marks[n];

    printf("enter array values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("The arrays are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("marks[%d]=%d\n", i, marks[i]);
    }

    return 0;
}