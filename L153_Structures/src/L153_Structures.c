/*
 ============================================================================
 Name        : L153_Structures.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct CarModel{
	uint8_t 	carID;
	uint32_t 	carPrice;
	uint16_t	carMaxSpeed;
	float		carWeight;
};

void wait_user_input();

int main(void) {

	struct CarModel Honda = {126226, 100000, 128, 23.5};
	struct CarModel Nissan = {131989, 100005, 256, 26.2};
	struct CarModel BMW = {.carPrice = 12000, .carWeight = 33.3, .carID = 12, .carMaxSpeed = 2323232};

	printf("Datos Honda: \n");
	printf("ID: %u", Honda.carID);
	printf("\nPrecio: \$ %u", Honda.carPrice);
	printf("\nVel max: %u km/h", Honda.carMaxSpeed);
	printf("\nPeso: %f", Honda.carWeight);

	wait_user_input();

	return EXIT_SUCCESS;
}


void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}

