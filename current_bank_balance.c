/*
Name: Kiptui Kipyator 
Reg No: PA106/G/28740/25
Date: 8th October 2025
Description: Program to display current balance in bank account 
*/

#include <stdio.h>

int main() {
    double balance = 1000; 
    double amount;

    printf("Welcome to NCBA Bank ATM\n");
    printf("Current balance: %.2f KES\n", balance);

    while (balance > 0) {
        printf("Enter amount to withdraw : ");
        scanf("%lf", &amount);

        if (amount == 0) {
            printf("Thank you for using NCBA Bank ATM. Goodbye!\n");
            break;
        }

        if (amount > balance) {
            printf("Insufficient funds. Your current balance is %.2f KES.\n", balance);
        } else if (amount < 0) {
            printf("Invalid withdrawal amount. Please enter a positive number.\n");
        } else {
            balance -= amount;
            printf("Withdrawal successful. Remaining balance: %.2f KES\n", balance);
        }

        if (balance <= 0) {
            printf("Your balance is now zero or negative. No more withdrawals possible.\n");
        }
    }

    return 0;
}