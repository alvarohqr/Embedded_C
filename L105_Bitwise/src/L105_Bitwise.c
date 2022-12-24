/*
 ============================================================================
 Name        : L105_Bitwise.c
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

	int a, b;

	puts("Enter two integers numbers: ");
	scanf("%d %d", &a, &b);

	printf("\nBitwise AND: 	%d", a&b);
	printf("\nBitwise OR: 	%d", a|b);
	printf("\nBitwise XOR:	%d", a^b);
	printf("\nBitwise ~A:	%d", ~a);
	printf("\nBitwise ~B:	%d", ~b);

	wait_user_input();

	return EXIT_SUCCESS;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}
