/*
 ============================================================================
 Name        : L156_Padding.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
struct DataSet{
	char 	data1;
	int 	data2;
	char 	data3;
	short 	data4;
}__attribute__((packed));
*/

typedef struct{
	char 	data1;
	int 	data2;
	char 	data3;
	short 	data4;
}DataSet_t;

DataSet_t data;

int main(void) {

	//struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	uint8_t *ptr;

	ptr = (uint8_t*)&data;
	uint32_t totalSize = sizeof(struct DataSet);

	printf("Direccion de memoria		Contenido\n");
	printf("=========================================\n");

	for(uint32_t i = 0; i<totalSize; i++){
		printf("%p,		%X\n", ptr, *ptr);
		ptr++;
	}

	printf("\nMemoria consumida por esta estructura: %I64u\n", totalSize);

	getchar();

	return EXIT_SUCCESS;
}
