/*
 * main.c
 *
 *  Created on: 9 nov 2021
 *      Author: ah_qu
 */

#include <stdio.h>

//static int mainPrivateData;
int mainPrivateData;
void file1_func();


int main(){
	mainPrivateData = 100;

	printf("mainPrivateData = %d\n",mainPrivateData);

	file1_func();

	printf("mainPrivateData = %d\n",mainPrivateData);

	return 0;
}
