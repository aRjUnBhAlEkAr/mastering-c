// NULL Pointer.

// Example 1 :

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = NULL;

    if(ptr != NULL)
    {
        printf("value of ptr is %d", *ptr);
    }
    else
    {
        printf("Invalid Pointer");
    }

    return 0;
}