/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 29/07/2025
Task   : Write a C program to print all negative elements in an array.
*/

#include<stdio.h>

int main()
{
 int n, j = 0, i;

    printf("enter array size: ");
    scanf("%d", &n);

    int marks[n];

    printf("enter array values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("The negative numbers are:\n");

    for (int i = 0; i < n; i++)
    {
        if (marks[i]<0)
        {
        printf("marks[%d]=%d\n", i, marks[i]);
    
        }
        
    }
    


    return 0;
}
