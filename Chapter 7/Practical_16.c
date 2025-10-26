// What will be the output of the following program ?

#include<stdio.h>

int main(){
    int a[5] = {100,200,300,400,500};
    int *p[] = {a, a+1, a+2, a+3, a+4};
            //  0   1   2   3   4   5
    int **pp = p;   //this will only stores the address of the variable p in double pointer variable pp.
    //printf("%d %d %d %d %d\n", a[0], *a, *p[0], **(p+0), (**pp)); it all is able to access the value at the a[0] i.e. 100.

    pp++;   // it will increased by the size of the data type.
    printf("%d %d %d\n", pp-p, *pp - a, **pp);  // p - a, a - a
    
    *pp++;
    printf("%d %d %d\n", pp-p, *pp - a, **pp);

    ++*pp;
    printf("%d %d %d\n", pp-p, *pp - a, **pp);

    ++**pp;
    printf("%d %d %d\n", pp-p, *pp - a, **pp);

    return 0;
}