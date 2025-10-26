// Write a program to print Even number from 1 - 50 using for loop.

#include<stdio.h>

int main(){
    int i;

    printf("Even numbers from 1 - 50 : \n");
    for(i = 1; i < 51 ; i++){
        if (i%2 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    return 0;
}