/*
 ============================================================================
 Name        : L107_Set7and4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void wait_user_input();

int main(void) {

	int a;

	puts("Enter an integer numbers: ");
	scanf("%d", &a);

	printf("\nSetting the 4th and 7th positions to 1: %d", a | 144);

	wait_user_input();

	return EXIT_SUCCESS;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}
