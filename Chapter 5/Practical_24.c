/* Register :
        a. The variable declared as the register is allocated the memory into the CPU register depending upon the sixe of memory remaining.
        b. We can not dereference the register variable .
*/

/*
#include<stdio.h>

int main(){
    register int a;

    printf("%d", a);
    return 0;
}
*/

#include<stdio.h>

int main(){
    register int a = 0;
    printf("%u", a);    // This will give us compile time error since we can not access the address of a register variable.
}