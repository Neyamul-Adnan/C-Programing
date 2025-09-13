/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Scalar matrix multiplication.
*/

#include <stdio.h>

int main()
{

    int i, j, n, r, c, val;

    printf("Enter row & col: ");
    scanf("%d %d", &r, &c);

    int m1[r][c], m2[r][c];

    printf("Enter scaler value: ");
    scanf("%d", &val);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Scalar matrix multiplication:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", m1[i][j] * val);
        }
        printf("\n");
    }

    return 0;
}
