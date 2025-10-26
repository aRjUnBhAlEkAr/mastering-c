#include<stdio.h>

int main(){
    int a = 3;
    printf("%d %d %d", a, ++a, a++);
    // output : 5 5 3;  because the compiler takes argument from right to left.
    return 0;
}