/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Write a C program to subtract two matrices.
*/

#include<stdio.h>

int main()
{

    int i, j, n, r, c;

    printf("Enter row & col: ");
    scanf("%d %d", &r, &c);

    int m1[r][c], m2[r][c], m3[r][c];

    printf("Enter 1st matrix:\n");
    printf("please enter a valid matrix");
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        scanf("%d", &m1[i][j]);
      }
      
    }
    printf("Enter 2nd matrix:\n");
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        scanf("%d", &m2[i][j]);
      }
      
    }
    printf("Subtraction of the matrices:\n");
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        printf("%d ", m1[i][j] - m2[i][j]);
      }
      printf("\n");
    }
    


    return 0;
}

