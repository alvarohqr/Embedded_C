/*
 ============================================================================
 Name        : L90_IfExercise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int age;

	printf("How old are you?: ");
	scanf("%d",&age);

	if (age>=18){
		printf("You are old enough to vote!");
	}else{
		printf("You are to young to vote!");
	}

	printf("Press enter key to exit the application!");
	while( getchar() != '\n' ){
	}

	getchar();

	return EXIT_SUCCESS;
}
