/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Write a C program to multiply two matrices.
*/

#include<stdio.h>

int main()
{

int i, j, k, n, r, c;
float res=0;

    printf("Enter row & col: ");
    scanf("%d %d", &r, &c);

    int m1[r][c], m2[r][c], m3[r][c];

    printf("Enter 1st matrix:\n");
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
    printf("Multiplication of the matrices:\n");
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        for ( k = 0; k < r; k++)
        {
           float res[i][j] = (m1[j][k] * m2[k][i]);
            printf("%d", res[i][j]); 
        }
        printf("\n");
      }
      printf("\n");
    }
    
    
    


    return 0;
}
