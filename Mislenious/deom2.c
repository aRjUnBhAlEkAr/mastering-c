#include<stdio.h>

int main(){
    int a = 3;

    printf("%d", a+=(a+=3, 5, 1));
    return 0;
}