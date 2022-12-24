/*
 * main.c
 *
 *  Created on: 9 nov 2021
 *      Author: ah_qu
 *  Operador & para obtener la dirección
 *  de la variable en cuestión
 */


#include <stdio.h>

int main (){
	char A, B, C;
	A = 'A';
	B = 'B';
	C = 'C';

	printf("La dirección de la variable %c",A);
	printf(" es: %p\n", &A);
	printf("La dirección de la variable %c",B);
	printf(" es: %p\n", &B);
	printf("La dirección de la variable %c",C);
	printf(" es: %p\n", &C);

	return 0;
}
