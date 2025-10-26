/* Calculate income tax paid by an employee to the Government as per the slabs mentioned below .
    income slab             tax
    2.5 L - 5.0 L            5%
    5.0 L - 10.0L            20%
    above 10.0 L             30%
    there is no tax below 2.5 L. Take income amount as an input.
*/

#include<stdio.h>

int main(){
    float income = 0, tax;

    printf("Enter Your Income Amount : ");
    scanf("%f", &income);

    if(income >= 250000 && income <=500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    
    if(income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    
    if(income >= 100000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    
    printf("Your net Income is %f, now you have to pay %f as Tax .", income, tax);
    return 0;
}