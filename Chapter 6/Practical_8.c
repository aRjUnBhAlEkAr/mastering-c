// Write a program to Sorting element in a matrix and print it.

#include<stdio.h>

int main(){
    int array[2][3];

    printf("Enter values at the index : \n");

    // traversing the 2D array.
    for(int i = 0; i < 2; i++)  // loop for ROW.
    {
        for(int j = 0; j < 3; j++)  // loop for COLUMN
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n\nprinting the elements :\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("array[%d][%d] = %d\t", i, j, array[i][j]);
        }   // end of j
        printf("\n");
    }   // end of i
    return 0;
}