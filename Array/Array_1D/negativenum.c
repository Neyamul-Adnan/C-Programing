/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 30/07/2025
Task   : Write a C program to count total number of negative elements in an array

*/

#include <stdio.h>

int main()
{

    int n, i, neg=0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array values:");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg++;
        }
    }
    printf("Total negative numbers: %d\n", neg);

    return 0;
}