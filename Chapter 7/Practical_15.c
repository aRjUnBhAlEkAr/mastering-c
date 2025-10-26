// Pointer to Array of Function.

#include<stdio.h>

// function declaration.
int show();
int showadd(int);

// global variable declration.
int (*arr[3])();
int (*(*ptr)[3])(); // ptr[0] = fubction 1, ptr[1] = function 2

// main() method begins.
int main(){
    int result;
    arr[0] = show;
    arr[1] = showadd;
    ptr = &arr;
    result = (**ptr)();

    printf("printing the value returned by show = %d", result);
    (*(*ptr+1))(result);
    return 0;
}

int show(){
    int num1 = 10;
    return num1++;
}

int showadd(int num2){
    printf("\nAdding 90 to the value returned by show : %d", num2 + 90);
    return 0;
}