/*
Name: Kiptui Kipyator
Reg No : PA106/G/28740/25
Date: 21th October 2025
Description : Program to calculate fare
*/

#include <stdio.h>

float Calculate_fare(float distance) {
    float fare_rate = 50.0;
    return distance * fare_rate;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", Calculate_fare(distance));
    return 0;
}