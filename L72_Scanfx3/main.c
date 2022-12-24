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

	printf("Enter three numbers: ");
	//fflush(stdout);
	scanf("%lf %lf %lf", &a, &b, &c);

	avg = ( a + b + c ) / 3;
	printf("\nThe average of the three values is: %lf  \n", avg);
	//fflush(stdout);

	printf("\nPress enter to exit the application!");
	while( getchar() != '\n' ){

	}

	getchar();

	return 0;
}
