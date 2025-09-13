#include <stdio.h>

int main()
{
    int a[100], n, pos = 0, val = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array values:");
    // array value input.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position you want to insert: ");
    scanf("%d", &pos);

    printf("Enter the value you want to insert : ");
    scanf("%d", &val);

    for (int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1]; // right shift
    }
    a[pos - 1] = val;
    n++;

    printf("After Shifting.......");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
