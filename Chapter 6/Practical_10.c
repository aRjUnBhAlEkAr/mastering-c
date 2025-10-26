// Return of Array

// Passing array to a function as a pointer.

#include<stdio.h>   // Pre Processor

void getArray(char *);

int main(){
    char array[] = {'A','B','C','D','E'};
    int c = 10;
    
    getArray(array);
    return 0;
}

void getArray(char *array)
{
    printf("Elements of array are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%c\t", array[i]);
    }
}