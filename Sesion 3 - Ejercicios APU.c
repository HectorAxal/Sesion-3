/*
 ============================================================================
 Name        : Sesion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	unsigned int pesos :24;
	unsigned int centavos :7;
	unsigned int signo :1;
}Moneda;

int main(void) {

	float r1=-7.528;
	float *p1 = &r1;

	printf("%p \n%p\n",p1,&p1);

	*p1/=2;
	printf("%.3f \n",r1);

	int a1[100] = {};
	int *p2 = &a1[0];
	int *p3 = &a1[2];
	*p2=10;
	*p3=20;
	*(p3+7)=*p2*3;

	printf("%d %d %d %d",a1[0],a1[2],a1[3],a1[9]);

	return EXIT_SUCCESS;
}
