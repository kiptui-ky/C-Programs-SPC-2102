/*
Name: Kiptui Kipyator 
Reg No: PA106/G/28740/25
Description: Program to compute volume and surface area 
V = 'PI' * r * r * h
S_A = 2 * 'PI' * r * r * h + 2 * 'PI' * r * h
*/


#include <stdio.h>

int main() {
    float radius, height, volume, surfaceArea;

    // prompt the user to enter radius
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    //prompt the user to enter height 
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // calculate volume and surface area
    volume = 'PI' * radius * radius * height;
    surfaceArea = 2 * 'PI' * radius * radius + 2 * 'PI' * radius * height;

    // display volume and surface area 
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}