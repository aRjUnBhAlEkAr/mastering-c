// Array declaration with initialization 

#include<stdio.h>

int main(){
    int marks[5] = {66,50,66,70,80};    // intializing integer type array variables.
    float percentage[5] = {55.15,60.15,65.15,70.15,75.15};  // initializing floating type array variables.
    char grade[5] = {'A','B','A','A','B'};  // initialiaing character type variables.

    for(int i = 0; i < 5; i++)
    {
        printf("%d\t%c\t%.2f\n", marks[i], grade[i], percentage[i]);
    }
    return 0;
}