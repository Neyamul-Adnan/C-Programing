
#include<stdio.h>

int main()
{
    int pos, n, temp=0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Index[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1] ;
                arr[j+1] = temp;
            }
        } 
    }
    printf("After sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
