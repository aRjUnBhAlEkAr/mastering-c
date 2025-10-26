 #include<stdio.h>

int main(){
    // Q 1. Which is the following is invalid in c.

    /* 1. int a; b = a;
    -> int a ; b = a; Invalid
    */
    int a, b=a; //Valid Statement.

    /* 2. int v = 3^3;
    int v = 3^3;      valid
    */

    /* 3. char dt = '21 Dec 2020';
    char dt = '21 Dec 2020'; Invalid
    */

    // Q 2. What data type will 3.0/8-2 return ?
    // -> double .

    //Q 3. Write a program to determine whether a number is divisible by 97 or not.
    int num;

    printf("Enter any Number : ");
    scanf("%d",&num);
    printf("Divisibility test returns : %d\n",num%97);
    
    // Q 4. Explain step by step evaluation of 3 * x/y - z + k where x = 2, y = 3, z = 3, k = 1
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 3 * 2 / 3 * 3 + 1
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // 0
    printf("Result of 3 * x/y - z + k : %d",result);

    /* Q 5. 3.0 + 1 will be :
    --> Floating Point.
    */
    return 0;
}