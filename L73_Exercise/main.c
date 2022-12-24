/*
 * main.c
 *
 *  Created on: 14 dic 2021
 *      Author: ah_qu
 */


#include <stdio.h>

int main(void){

	char a, b, c, d, e, f;


	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

	printf("\nASCII code: %d %d %d %d %d %d  \n",  a, b, c, d, e, f);

	printf("\nPress enter to exit the application!");
	while( getchar() != '\n' ){

	}

	getchar();

	return 0;
}
