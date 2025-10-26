// Return an array.
// Dynamically allocated array.
// Example 2 : Returning array using malloc() function.

#include<stdio.h>
#include<malloc.h>
int *getArray(int *size)
{
    printf("Enter size of array : ");
    scanf("%d", &*size);

    //malloc() function for Dynamically allocatation of memory to the array.
    int *p = malloc(sizeof(*size));
    
    printf("Enter Elements in an Array : ");
    for(int i = 0; i < *size; i++)
    {
        scanf("%d", &p[i]);
    }
    return p;
}

int main(){
    int *ptr, size;
    ptr = getArray(&size);

    printf("\nElements of Array are : ");
    for(int i = 0; i < size ; i++)
    {
        printf("%d\t", ptr[i]);
    }
    return 0;
}