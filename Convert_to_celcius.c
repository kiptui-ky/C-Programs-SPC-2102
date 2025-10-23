/*
Name: Kiptui Kipyator
Reg No : PA106/G/28740/25
Date: 21th October 2025
Description : Program to convert fahrenheit to celcius
*/

#include <stdio.h>

float Convert_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius = %.2f°C\n", Convert_to_celsius(f));
    return 0;
}