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


void wait_user_input();
void display(int *array, int nums);
void swap(int *array1, int *array2, int num1, int num2);

int main(void) {

	int a, b;

	printf("\nIngrese el # de elemetos del array1 y array2: ");
	scanf("%d %d", &a, &b);

	int data1[a], data2[b];

	for(int i = 0; i<a; i++){
		printf("\nIngrese el elemento %d del array1: ", i);
		scanf("%d",&data1[i]);
	}
	for(int i = 0; i<b; i++){
		printf("\nIngrese el elemento %d del array2: ", i);
		scanf("%d",&data2[i]);

	}
	display(data1,a);
	display(data2,b);

	swap(data1,data2,a,b);

	wait_user_input();
	return EXIT_SUCCESS;
}


void wait_user_input(){
	printf("\nPress enter key to exit the application!\n");

	while(getchar()!=0){
	}
	getchar();

}


void display(int *array, int nums){
	printf("\n");
	for(int i=0; i<nums; i++){
		printf("%4d  ",array[i]);
	}
}

void swap(int *array1, int *array2, int num1, int num2){
	int len = num1 < num2 ? num1 : num2;
	for (int i=0; i<len; i++){
		int temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
	display(array1,num1);
	display(array2,num2);
}



