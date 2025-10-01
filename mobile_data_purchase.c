/*
Name: Kiptui Kipyator 
REG NO: PA106/28740/25
Description : Program to display mobile data purchase 
*/

#include <stdio.h>
int main() {

	int choice;
	printf("Select your choice\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB   @ 350 KES\n");
	printf("4. 2GB   @ 600 KES\n");
	printf("Enter your choice 1-4: ");
	scanf("%d",&choice);
	switch(choice){
	
	case 1:
		printf("You selected 100MB cost=50 KES\n");
		break;
	case 2:
		printf("You selected 500MB cost=200 KES\n");
		break;
    case 3: 
       printf("You selected 1GB cost=350 KES\n");
       break;
    case 4:
    	printf("You selected 2GB cost=600 KES\n");
    	break;
	default:
		printf("Invalid choice\n");
		
	}
    
	return 0;
}