/*
Name:Kiptui Kipyator 
Reg No:PA106/G/28740/25
Date: 27th September 2025
Description :Program to calculate water bill
*/

#include<stdio.h>
int main(){
    float unit,bill;
    
    printf("Enter water unit consumed: ");
    scanf("%f",&unit);
    
    if(unit <= 30){
    printf("Total water bill %.2f" ,unit*20);
    }
    
    else if(unit > 30 && unit<=60){
    printf("Total water bill %.2f: " ,unit*25);  
    }
    else {
    printf("Total water bill %.2f:  " ,unit*30);
    }
    
    return 0;
}   