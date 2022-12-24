/*
 * main.c
 *
 *  Created on: 9 nov 2021
 *      Author: ah_qu
 */


#include <stdio.h>

int main (){
	char A = 'A';
	/*
	unsigned long long int direccA = &A;
	número entero = apuntador; no son compatibles
	*/

	unsigned long long int direccA = (unsigned long long int)&A;

	printf("La dirección de la variable %c",A);
	printf(" es: %I64u\n", direccA);



	return 0;
}
