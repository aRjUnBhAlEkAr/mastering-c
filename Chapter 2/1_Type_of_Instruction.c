/*  Type of Instruction.
    a. Type of Declaration Instruction.
    b. Arithmetic Instruction.
    c. Control Instruction.
*/

#include<stdio.h>
#include<math.h>

int main(){
    // a. Type Decleration Instruction.
    // Declaring variable is Known as Type Decleration Instruction.

    int a = 10, b, c; 
    b = c = a;  // it is a Valid Statement.

    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
    printf("Value of c : %d\n", c);

    float d = 1.1;
    float e = d + 8.9;
    printf("e is : %f\n",e);

    // b. Arithmetic Instruction.
    // + - * / is a Operators.
    int i = 10, j = 5;
    printf("i + j : %d\n",i + j);
    printf("i - j : %d\n",i - j);
    printf("i / j : %d\n",i / j);
    printf("i * j : %d\n",i * j);

    // Modular Divison Operator.
    int k = 10;
    int l = 5;
    printf("Remainder of 10 mod of 5 is : %d\n",(k%l));

    printf("3 power of 5 : %f\n",pow(3 ,5));

    //  Type conversion.
    /*  int and int = int
        int and float = float
        float and float = float
    */
    printf("6   + 2 : %d\n", 6 + 2);
    printf("6.5 + 2 : %f\n", 6.5 + 2);

    return 0;
}