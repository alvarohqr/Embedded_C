/*
 * main.c
 *
 *  Created on: 9 nov 2021
 *      Author: ah_qu
 */

#include <stdio.h>
/*
 * 2)
 * Posible solución: volverla global, sin embargo se
 * corre el riesgo de que otra función la modifique.
 */

int counter = 0;

void myFun1();

int main(){

	myFun1();
	myFun1();
	myFun1();
	myFun1();
	myFun1();

	return 0;

}

void myFun1(){
	/*
	 * 1)
	 * int counter = 0; -> cada que se ejecuta myFun esta vuelve a 0.
	 */
	/*
	 * 3)
	 * Volver la variable privada y accesible solo desde myFun1
	 * con "static"; así ya no "morira".
	 */

	static int counter = 0;
	counter++;
	printf("myFun1 se ha ejecutado %d veces\n",counter);
}
