// Increment Pointer.
// Traversing an array by using pointer.
#include<stdio.h>

int main(){
    int num[5] = {10,20,30,40,50};
    int *ptr = num;

    printf("Printing Array Elements :\t");
    // Traversing the array using for loop.
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr+i));       //we can also type like this --> ptr[i] or ptr++
        // or
        // printf("%d\t", ptr[i]);
    }
    return 0;
}