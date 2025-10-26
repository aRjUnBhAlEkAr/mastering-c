#include<stdio.h>

int main(){
    int num = 25;
    int *p = &num;
    int **pp = &p;

    printf("Value of variable num : %d\n", num);    // value of num will be printed.
    printf("Address of variable num : %u\n\n", p);  // Address of variable num will be printed.

    printf("Value stored at Pointer p : %d\n", *p); // value stored at pointer p will be printed i.e. 25
    printf("Address of Pointer p : %u\n\n", pp);    // Address of pointer p will be printed.

    printf("Value stored at Pointer **pp : %d", **pp);  // value stored at the address contain by pointer pp will be printed.
    return 0;
}