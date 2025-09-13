/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : 1.5 + 2.5 + 3.5 + n
*/

#include<stdio.h>

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("\nEnter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Index[%d] : ", i);
        scanf("%d", &arr1[i]);
    }

     printf("the second array elements are: \n");
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
        printf("%d ", arr2[i]);
    }

   
    


    return 0;
}
