#include<stdio.h>

int main(){
    int a = 10;

    a = (10, 20, a);
    printf("%d", a);
    return 0;
}