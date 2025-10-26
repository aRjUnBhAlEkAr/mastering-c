// break statement 
// Write a program to break nested loop, which breaks only the inner loop, but not outer loop using for loop.

#include<stdio.h>

int main(){
    int i,j;    // declaring local variables.

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d  %d\n", i, j);
            if(i == 2 && j == 2)
            {
                break;  // will break or exit inner loop only.
            }
        }
    }
    return 0;
}