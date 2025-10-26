// Unary Operator (Increment and Decrement operator).

#include<stdio.h>

int main(){
    int i = 0;
    
    //Unary Operators.
    printf("i   : %d\n",i);

    // Increament Operators.
    printf("i++ : %d\n",i++);   // assigend(print) then increament.
    printf("i   : %d\n",i);
    printf("++i : %d\n",++i);   // increament then assigned(print).
    printf("i   : %d\n",i);

    // Decreament Operators.
    printf("i-- : %d\n",i--);   // assined(print) then decreament.
    printf("i   : %d\n", i);
    printf("--i : %d\n",--i);   // decreament then assigned(print).
    return 0;
}