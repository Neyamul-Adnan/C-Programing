
#include <stdio.h>

int main()
{

    int pos = -1, n, val;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Index[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter searching value: ");
    scanf("%d", &val);
    for (int i = 0; i < n; i++)
    {
        if (val == arr[i])
        {
            pos++;
            printf("\nIt is here \n the index is: %d", arr[i-1]);
            break;
        }
    }

    if (pos == -1)
    {
        printf("\nnot found");
    }

    return 0;
}
