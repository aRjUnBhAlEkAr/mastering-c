#include<stdio.h>
#include<stdlib.h>
// Function declaration
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    // Function call
    goodMorning();
    sleep(5);
    goodAfternoon();
    sleep(5);
    goodNight();
    return 0;
}

// Function Definition
void goodMorning()
{   
    printf("Good Morning\n");
}

void goodAfternoon()
{
    printf("\bGood Afternoon\n");
}

void goodNight()
{
    printf("Good Night\n");
}