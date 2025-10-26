#include<stdio.h>

int main(){
    int i = 0;

    // i++ : prints(assigned) then increament .
    printf("value of i : %d\n", i);
    printf("i++ : %d\n", i++);

    // ++i : increament then prints(assigned) .
    printf("value of i : %d\n", i);
    printf("++i : %d\n", ++i);

    // i-- : prints(assigned) then decreament .
    printf("value of i : %d\n", i);
    printf("i-- : %d\n", i--);

    // --i : decreament then prints(assigned) .
    printf("value of i : %d\n", i);
    printf("--i : %d\n", --i);

    return 0;
}