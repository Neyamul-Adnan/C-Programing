/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Second largest element in an array.
*/

#include <stdio.h>

int main()
{
    int i, n, max = 0, smax = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array values: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = smax = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        if (arr[i] < max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }

    printf("First Largest: %d\n", max);
    printf("Second Largest: %d\n5", smax);

    return 0;
}
