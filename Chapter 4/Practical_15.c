// Continue Statement.

#include<stdio.h>

int main(){
    int i = 0, j = 0;   // initializing local variables.

    for(i = 1; i <= 5; i++) // starting loop from 1 - 5 for variable 'i'.
    {
     for(j = 1; j <= 5; j++)// starting loop from 1 - 5 for variable 'j'.
     {
         if(i == 2 && j == 2)
         {
             continue;
         }
         printf("i : %d & j : %d\n", i, j);
     }   
    }
    return 0;
}