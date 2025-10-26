// Nested do-while loop.
/* Write a program to print a asterisk(*) pattern using do while loop.

    *       *       *       *       *
    *       *       *       *       *
    *       *       *       *       *
    *       *       *       *       *
    *       *       *       *       *

*/
#include<stdio.h>

int main(){
    int i = 1;

    do
    {
        int j = 1;
        do
        {
            printf("*\t");
            j++;
        }while(j <= 5);

        printf("\n");
        i++;
    }while(i <= 5);

    return 0;
}