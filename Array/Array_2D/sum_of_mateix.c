/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Write a C program to sum two matrices.
*/

#include<stdio.h>

int main()
{

    int n, r, c, sum=0;

    printf("Enter row and col: ");
    scanf("%d %d", &r, &c);
    
    int mat1[r][c], mat2[r][c], mat3[r][c];

    printf("Enter the elements of first matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
        
    }
    printf("Enter the elements of second matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        
    }
    printf("Sum of the matrices: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            //sum += mat1[i][j] +  mat2[i][j];
            printf("%d ", mat1[i][j] +  mat2[i][j]);
            //sum=0;
        }
        printf("\n");
    }
    
    

    return 0;
}
