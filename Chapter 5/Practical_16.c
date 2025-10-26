// Write a program to convert celcius to fahrenheit .

#include<stdio.h>
float temperature_converter(int);

int main(){
    float celcius;
    float fahrenheit;

    printf("Enter a value of Celcius : ");
    scanf("%f", &celcius);

    fahrenheit = temperature_converter(celcius);
    printf("%.2f Celcius to %.2f Fahrenheit", celcius, fahrenheit);
    return 0;
}

float temperature_converter(int celcius)
{
    float tempInFahrenheit = (celcius * (float)9/5)+32;
    return tempInFahrenheit;
}