

#include<stdio.h>

int main(){
    int a = 10;
    char c = 'a';
    float f = 10.22;
    void *ptr;

    ptr  = &a;
    printf("Address at ptr is %d and value is %d\n",ptr , *(int *)ptr);

    ptr = &c;
    printf("Address at ptr is %d and value is %c\n",ptr , *(char *)ptr);

    ptr = &f;
    printf("Address at ptr is %d and value is %f", ptr , *(float *)ptr);
    return 0;
}