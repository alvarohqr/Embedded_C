/*
 * main.c
 *
 *  Created on: 14 nov 2021
 *      Author: ah_qu
 */


#include <stdio.h>

int add_func(int a, int b);
void add_func2(int a, int b);

int main(){
	int sum = add_func(2,3);
	printf("Return function\n");
	printf("The result of 2+3 is: %d \n",sum);
	printf("----------------------------------\n");
	printf("Void function\n");
	add_func2(2,3);

	return 0;
}

int add_func(int a, int b){
	return a+b;
}

void add_func2(int a, int b){
	int sum2 = a + b;
	printf("The result of 2+3 is: %d \n",sum2);
}
