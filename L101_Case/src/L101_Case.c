/*
 ============================================================================
 Name        : L101_Case.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141516

void wait_user_input();

int main(void) {

	char fig;
	double area;
	double a, b, h, r, w, l;
	//What area you wanna know?
	printf("Calculate the area of: \n");
	printf("\'t\'--->Triangle\n");
	printf("\'z\'--->Trapezoid\n");
	printf("\'c\'--->Circle\n");
	printf("\'s\'--->Square\n");
	printf("\'r\'--->Rectangle\n");
	printf("Exit\n");

	printf("Figure: ");
	scanf("%c",&fig);

	switch(fig){
	case 't':
		printf("Base: ");
		scanf("%lf", &b);
		printf("Height: ");
		scanf("%lf", &h);
		area = (b*h)/2;
		printf("\nThe area of the triangle is: %0.3lf", area);
		break;
	case 'z':
		printf("Base a: ");
		scanf("%lf", &a);
		printf("Base b: ");
		scanf("%lf", &b);
		printf("Height: ");
		scanf("%lf", &h);
		area = ((a*b)*h)/2;
		printf("\nThe area of the trapezoid is: %0.3lf", area);
		break;
	case 'c':
		printf("Radious: ");
		scanf("%lf", &r);
		area = pi*pow(r,2);
		printf("\nThe area of the circle is: %0.3lf", area);
		break;
	case 's':
		printf("Length: ");
		scanf("%lf", &a);
		area = pow(a,2);
		printf("\nThe area of the square is: %0.3lf", area);
		break;
	case 'r':
		printf("Length: ");
		scanf("%lf", &l);
		printf("Width: ");
		scanf("%lf", &w);
		area = w*l;
		printf("\nThe area of the rectangle is: %0.3lf", area);
		break;
	default:
		printf("\nIncorrect option\n");
		break;
	}
	wait_user_input();
	return 0;
}

void wait_user_input(){
	printf("\nPress enter key to exit the application!");
	while( getchar() != '\n' ){
	}
	getchar();
}
