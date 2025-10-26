// NULL Pointer.

// Following are the type of NULL pointer declaration.
    //  1. int *ptr = (int *)0;
    //  2. float *ptr =(float *)0;
    //  3. char *ptr = (char *)0;
    //  4. double *ptr = (double *)0;
    //  5. char *ptr = '\0';
    //  6. int *ptr = NULL;

#include<stdio.h>

int main(){
    int *p = NULL;
    printf("address at *p is %d", p);
    return 0;
}