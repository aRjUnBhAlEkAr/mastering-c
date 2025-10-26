// NULL Pointer.

// Example 2 :

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = '\0';

    ptr = (int *)malloc(4*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        printf("Memory is allocated");
    }
    return 0;
}