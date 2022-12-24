/*
 ============================================================================
 Name        : L92_Equals.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void wait_user_input();

int main(void) {

	float a, b;
	int c, d;

	printf("Enter the two numbers (a,b): ");
	//MAL CORREGIR ESTO, NO FNCIONAAAA!
	while ((scanf("%f",&a) == 0) || (scanf("%f", &b) == 0)){
		printf("Invalid inputs!\n");
		//wait_user_input();
		//return 0;
		printf("Please enter the two integer numbers (a,b): ");
		scanf("%f %f", &a, &b);
		getchar();
	}

	c = a;
	d = b;

	if ((a != c ) || (d != b)){
		printf("Warning, comparing only integers\n");
	}

	else if (c > d){
		printf("A is greater than B\n");
	}
	else if (c < d){
		printf("B is greater than A\n");
	}
	else if (c == d){
		printf("A and B are equals\n");
	}
	wait_user_input();
	return EXIT_SUCCESS;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!");
	while( getchar() != '\n' ){
	}
	getchar();
}
