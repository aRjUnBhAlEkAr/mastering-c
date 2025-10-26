/* Storage classes in c.
        There are Four storage classes.
        a. Automatic.
        b. External.
        c. Static.
        d. Register.
*/

/* Automatic : a. Automatic variables are allocated memory automatically at runtime.
               b. The Scope of the automatic variables is limited to the block in which they are defined.
               c. The automatic variables are intialized to garbage value by default.
*/

// Example 1.
#include<stdio.h>

int main(){
    int a; //auto
    char b; //auto
    float c; //auto

    printf("Value in a : %d\n", a);
    printf("Value in b : %c\n", b);
    printf("Value in c : %f\n", c);
    return 0;
}

// Example 2.
/*
#include<stdio.h>

int main(){
    int a = 10, i;
    printf("%d\n", ++a);
    {
        int a = 20;
        for (i = 0; i < 3; i++)
        {
            printf("%d\t", a);  // 20 will be printed 3 times since it is the local value of a.
        }
    }
    printf("\n%d", a);  // 11 will be printed since the scope of a = 20 is ended.
    return 0;
}
*/