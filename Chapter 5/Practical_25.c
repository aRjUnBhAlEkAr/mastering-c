/* External variable.
        a.  The external storage class is used to tell the compiler that the variable defined as extern is declared with an external 
            linkage elsewhere in the program.
        b.  The variable declred as extern are not allocated any memory.
        c.  The default intial value of external integral type is 0 otherwise null.
        d.  The External variable can be declared many times but can be initialized at only once.
        e. Keyword for external variable is "extern".

*/

/*
Example 1 :
#include<stdio.h>

int main(){
    extern int a;
    printf("%d", a);    // this will show error .
    return 0;
}
*/

/*
Example 2 :
#include<stdio.h>
int a;

int main()
{
    extern int a;
    printf("%d", a);
    return 0;
}
*/

/*
#include<stdio.h>
int a;

int main()
{
    extern int a = 0;   // This will show compiler error since we can not extern and intializer the variable at same time.
    printf("%d", a);
}
*/

#include<stdio.h>

int main(){
    extern int a;   // defining the external variable using the keyword 'extern'.
    printf("%d", a);
}
int a = 10; // intializing the value of a = 10.
