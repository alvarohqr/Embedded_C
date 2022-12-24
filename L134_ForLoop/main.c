/*
 * main.c
 *
 *  Created on: 28 dic 2021
 *      Author: ah_qu
 */


#include <stdio.h>

void wait_user_input();

int main(void){

	int h,i, j;

	printf("Ingrese la altura de la piramide: ");
	scanf("%d", &h);

	for(i=1; i<=h; i++){
		for(j=i; j>0; j--){
			printf("%2d", j);
		}
		printf("\n");
	}


	wait_user_input();

}


void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}

