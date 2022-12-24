/*
 ============================================================================
 Name        : L80_Pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	char var1 = 100;
	printf("The value of var1 is: %d\n", var1);
	printf("The address of var1 is: %p\n", &var1);

	char* pAddress = &var1;
	char value = *pAddress;
	printf("Read value: %d\n", value);

	*pAddress = 65;
	printf("The value of var1 is: %d\n", var1);

	return 0;
}
