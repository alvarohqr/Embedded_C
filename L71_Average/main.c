/*
 * main.c
 *
 *  Created on: 14 dic 2021
 *      Author: ah_qu
 */

#include <stdio.h>

int main(void){

	double a, b, c;
	double avg;

	//Sin fflush no se desplegan los printf, se quedan esperando en el buffer

	printf("Enter the first number: ");
	fflush(stdout);
	scanf("%lf",&a);
	printf("\nEnter the second number: ");
	fflush(stdout);
	scanf("%lf",&b);
	printf("\nEnter the third number: ");
	fflush(stdout);
	scanf("%lf",&c);

	avg = ( a + b + c ) / 3;
	printf("\nThe average of the three values is: %lf  \n", avg);

	printf("Press enter to exit the application!");
	while( getchar() != '\n' ){

	}

	getchar();

	return 0;
}
