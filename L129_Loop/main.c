/*
 * main.c
 *
 *  Created on: 28 dic 2021
 *      Author: ah_qu
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void wait_user_input();

int main(void) {

	int n1, n2, cont;

	cont = 0;
	int i = 0;

	printf("Ingrese el 1er y ultimo numero: \n");
	scanf("%d %d", &n1, &n2);
	printf("Numeros pares entre %d y %d: \n", n1,n2);

	if (n1 > n2){
		printf("Ingrese el ultimo numero: ");
		scanf("%d", &n2);
	}

	while(n1 <= n2){
		if ((n1 % 2) == 0){
			printf("%4d", n1);
			cont++;
		}
		n1++;
	}

	/*for (i = n1; i<=n2; i++){
		if ((i % 2) == 0 ){
			printf("%d ", i);
			cont++;
		}
	}*/

	printf("\nTotal de numeros pares: %d", cont);

	wait_user_input();

	return EXIT_SUCCESS;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}
