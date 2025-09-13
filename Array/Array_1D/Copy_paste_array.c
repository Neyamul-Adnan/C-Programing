/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 30/07/2025
Task   : Write a C program to copy all elements
         from an array to another array

*/

#include <stdio.h>

int main()
{

    int n, i, even = 0, odd = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    int a2[n];

    printf("Enter array values:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        a2[i] = a[i];
    }
    printf("Array 1: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a2[i]);
    }

    return 0;
}