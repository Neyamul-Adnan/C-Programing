/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 29/07/2025
Task   : Write a C program to take arrrys from user and print the sum of
         all arrays.
*/
#include <stdio.h>

int main()
{

     int n, i, sum=0;

    printf("enter array size: ");
    scanf("%d", &n);

    int marks[n];

    printf("enter array values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    
    printf("The sum is: %d", sum);
    return 0;
}
