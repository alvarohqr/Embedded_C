/*
 ============================================================================
 Name        : L107_EvenOdd.c
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

	puts("Enter an integer number: ");
	scanf("%d", &a);

	if (a & 0){
		printf("%d is an even number\n", a);
	}else{
		printf("%d is an odd number\n", a);
	}


	wait_user_input();

	return EXIT_SUCCESS;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}

