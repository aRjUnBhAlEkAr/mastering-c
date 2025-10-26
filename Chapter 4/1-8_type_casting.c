/*  Type casting :
        it convert one data to another.
        it use to avoid data loss, means it prints actual value of data.
    syntax :

*/

#include<stdio.h>

int main(){
    // without type casting.
    float num1 = 9/4;
    printf("Before type Casting : %f\n", num1);

    // with type casting. 
    float num2 = (float) 9/4;
    printf("After type Casting  : %f", num2); 
    return 0;
}