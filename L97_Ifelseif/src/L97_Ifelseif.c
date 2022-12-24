/*
 ============================================================================
 Name        : L97_Ifelseif.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void wait_user_input();

int main(void) {

	double income, taxR, taxP;


	printf("Enter your total income: ");
	scanf("%lf",&income);

	while (income < 0){
		printf("Enter a valid income!: ");
		scanf("%lf", &income);
	}

	if (income <= 9525){
		taxP = 0;
	}
	else if(income>9525 && income<=38700){
		taxR = 12;
		taxP = income * (taxR/100);
	}
	else if(income>38700 && income<=82500){
		taxR = 22;
		taxP = income * (taxR/100);

	}
	else{
		taxR = 32;
		taxP = income * (taxR/100) + 1000;
	}

	printf("\nTax payable= %lf\n", taxP);

	wait_user_input();
	return 0;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!");
	while( getchar() != '\n' ){
	}
	getchar();
}

