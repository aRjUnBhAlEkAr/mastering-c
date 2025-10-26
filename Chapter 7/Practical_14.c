// Pointer to function.

#include<stdio.h>   // Pre Processor.
int addition(); // Function Declaration

int main(){
    int result;
    int (*ptr)();   // ptr pointer to function of integer return type
    ptr = &addition;    // stores address of addition() function
    result = (*ptr)();  // pointer function call .

    printf("Addition is %d", result);
    return 0;
}

int addition(){
    int num1, num2;
    printf("Enter any 2 values :\n");
    scanf("%d %d", &num1, &num2);

    int result = num1 + num2;
    return result;
}