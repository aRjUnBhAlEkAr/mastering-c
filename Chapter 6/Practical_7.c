// 2D array.

#include<stdio.h>

int main(){
    int array[4][3] = {{10,20,30},{20,30,40},{30,40,50},{40,50,60}};

    //traversing 2D Array.
    for(int i = 0; i < 4; i++)  // this loop for ROWS.
    {
        for(int j = 0; j < 3; j++)  // this loop for COLUMNS.
        {
            printf("array[%d][%d] = %d\t", i, j, array[i][j]);
        }   // end of j
        printf("\n");
    }   // end of i
    return 0;
}