/*
Name : Kiptui Kipyator 
Reg : PA106/G/28740/25
Date : 27th Sept 2025
Description : Program to check student eligibility for final exams 
*/
#include<stdio.h>//scanf(), printf()

//main function
int main () {
    // variable declaration 
    int attendance, marks ;
    
    printf("Enter your attendance:\t");
    scanf("%d",& attendance );
    
    printf("Enter your marks:\t");
    scanf("%d",& marks);
    
    if(attendance >=75) {
      printf("You are eligible to do final exams\n");
    }   
    else {
      printf("You are not eligible to do final exams");
    }  
      
    if(marks >=40) {
       printf("You are eligible to do final exams\n");
    }   
    else {
       printf("You are not eligible to do final exams ");
    }   
    return 0 ; // execution successful
}      