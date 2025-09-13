/*
Author : Neyamul Adnan
Std_ID : 2025-2-60-476
Date   : //2025
Task   : Calculate total, average and find topper among students
*/

#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of students: ");
    scanf("%d", &r);

    printf("Enter number of subjects: ");
    scanf("%d", &c);

    int arr[r][c];       // marks matrix
    int total[r];        // total marks of each student
    float avg[r];        // average marks of each student

    for (i = 0; i < r; i++)
    {   
        int sum = 0;   // reset sum for each student
        printf("\nEnter marks of student %d : \n", i + 1);
        for (j = 0; j < c; j++)
        {
            printf("Subject %d : ", j + 1);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        total[i] = sum;
        avg[i] = (float)sum / c;   // type casting
    }

    // find topper
    int topper = 0;
    for (i = 1; i < r; i++)
    {
        if (total[i] > total[topper])
        {
            topper = i;
        }
    }

    // print results
    printf("\n----- Student Results -----\n");
    for (i = 0; i < r; i++)
    {
        printf("Student %d --> Total : %d, Average : %.2f\n", i + 1, total[i], avg[i]);
    }

    printf("\nTopper : Student %d with total %d marks\n", topper + 1, total[topper]);

    return 0;
}
