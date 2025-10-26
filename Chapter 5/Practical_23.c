/* Static variable.
        a. static variables holds their values between multiple functions.
        b. A same static variable can be declared many times but can be assigned at once.
        c. The scope of the global static variable is limited to the file in which it has declared.
        d. Keyword for declaring static variable is 'static'.
*/
#include<stdio.h>

/*int main(){
    static char c;
    static int i;
    static float f;

    printf("%c  %d  %f", c, i, f);  // default intial value of static variable is 0;
    return 0;
}
*/

#include<stdio.h>

void sum()
{
    static int a = 10;
    static int b = 20;

    printf("%d %d\n", a, b);
    a++;
    b++;
}

int main()
{
    int i;
    for(i = 0; i < 3; i++)
    {
        sum();
    }
    return 0;
}