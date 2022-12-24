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
void change_system_clock(int system_clock);

int main(){
	mainPrivateData = 100;

	printf("mainPrivateData = %d\n",mainPrivateData);

	file1_func();

	//printf("mainPrivateData = %d\n",mainPrivateData);


	return 0;
}

void change_system_clock(int system_clock){
	printf("System clock changes to: %d\n", system_clock);
}
