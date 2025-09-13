/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 30/07/2025
Task   : find total odd even in array.

*/

#include <stdio.h>

int main()
{

    int n, i, even = 0, odd = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array values:");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("Total odd numbers: %d\n", odd);
    printf("Total even numbers: %d\n", even);

    return 0;
}