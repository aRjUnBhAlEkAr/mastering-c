#include<stdio.h>

int main(){
    int num = 50;
    int *p = &num;  // pointer p is pointing to the address of num.
    int **pp = &p;  // pointer pp is a double pointing to the address of pointer p.

    printf("Address of num : %u\n", p);   // Address of num will be printed.
    printf("Address of p : %u\n", pp);    // Address of p will be printed.

    printf("Value stored at p : %d\n", *p); // value stored at the address contained by the pointer p i.e 10 will be printed.
    printf("Value stored at pp : %d\n", **pp);  // value stored at the address contained by the pointer pp will be printed.
    return 0;
}