// Increament pointer.

#include<stdio.h>

int main(){
    int num[5] = {10,20,30,40,50};
    int *ptr = num;

    printf("Before changing Elements inside the array :\n");
    for(int i = 0; i < 5; i++)
    {
        printf("num[%d] : %d\t", i, *(ptr+i));
    }

    for(int i = 0; i < 5; i++)
    {
        //*(ptr+i) = *(ptr + i) * 10;
        ptr[i] = ptr[i] * 10;
    }

    printf("\nAfter changing Elements inside the array :\n");
    for(int i = 0; i < 5; i++)
    {
        printf("num[%d] : %d\t", i, *(ptr+i));
    }

    return 0;
}