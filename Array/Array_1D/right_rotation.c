/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : 30/07/2025
Task   : Left rotate all elements of an array.


        ________Right Rotate_________
             a[i] = a[i-1]

        _________Left Rotate_________
             a[i] = [i+1]

*/

#include <stdio.h>

int main()
{
    // Right Rotate:  a[i] = a[i-1]
    int n, i, temp = 0, val = 0;

    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter array values:");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    temp = a[n - 1];

    for (i = n - 1; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = temp;

    printf("After right rotation: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
