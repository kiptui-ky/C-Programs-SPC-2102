/*
Name: Kiptui Kipyator 
Reg No: PA106/G/28740/25
Description: Program to check loan eligibility.
A bank offers a loan if:
Age is 21 years or older
Annual income is at least 21,000
*/

#include <stdio.h>

int main() {
    // variable declaration
    int age;
    float income;

    // prompt the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);

    // prompt the user to enter annual income
    printf("Enter your annual income in ksh : ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 & income >=21000)
    printf("\nCongratulations you qualify for a loan.");
    printf("\nUnfortunately, we are unable to offer you a loan at this time. ");

    return 0;
}