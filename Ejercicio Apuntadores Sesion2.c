/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
• Implementa una función length que devuelva el tamaño de una cadena de
texto (arreglo de caracteres) usando sólo operadores con apuntadores.
• Implemente una función toUnit que reciba un vector 2d V y lo haga unitario.
Unit (V) = V / |V|*/

void swap (int *i, int *j){
	int c=*i;
	*i=*j;
	*j=c;
}

int length (char *Le){
	int i;
	for(i=0;i=;i++);
}


int main(void) {
	int a=5;
	int b=4;
	swap(&a ,&b);
	printf("%d\n%d",a,b);

	char L[]="Texto";
	length(L);

	return EXIT_SUCCESS;
}
