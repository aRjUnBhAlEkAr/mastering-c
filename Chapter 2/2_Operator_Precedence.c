/*  Operator Precedence.
    a. 1st Priority --> "* / %"
    b. 2nd Priority --> "+ -"
    c. 3rd Priority --> "="
*/
#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;


    int equation1 = 3 * x - 8 * y;
    printf("3 * x - 8 * y : %d\n",equation1);
        // 6 - 24
        // -18

    // Operator Associativity : When operator of equal priority are present in expression, the tie is taken by associativity.
    int equation2 = 8 * y / 3 * x ;
    printf("8 * y / 3 * x : %d",equation2);
        // 24/3*x
        // 8*x
        // 16
    return 0;
}