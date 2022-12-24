/*
 * main.c
 *
 *  Created on: 14 dic 2021
 *      Author: ah_qu
 */


#include<stdio.h>
#include<stdint.h>

long long int  g_data = 0xFFFEABCD11112345;

int main(void){

	int *pAddress = (int*)&g_data;

	printf("value of pAddress %p\n",pAddress);
	printf("Value at address %p is %x\n", pAddress, *pAddress);

	pAddress = pAddress + 1;
	/*
	 * + 1 = sizeof(var)
	 * char + 1
	 * short +2
	 * int + 4
	 */

	printf("value of pAddress %p\n",pAddress);
	printf("Value at address %p is %x", pAddress, *pAddress);



}
