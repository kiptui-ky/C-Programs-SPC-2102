/*
Name: Kiptui Kipyator 
Reg No : PA106/G/28740/25
Date: 8th October 2025
Description : Program to calculate electric_bill
*/

#include <stdio.h>

float Electric_bill (int units) {
    float total = 0;

    if (units <= 100)
        total = units * 10;
    else if (units <= 200)
        total = (100 * 10) + ((units - 100) * 15);
    else
        total = (100 * 10) + (100 * 15) + ((units - 200) * 20);

    return total;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    printf("Total bill: KSh. %.2f\n", Electric_bill(units));
    return 0;
}