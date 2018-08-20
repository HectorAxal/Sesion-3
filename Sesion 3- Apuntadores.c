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
#include <math.h>

typedef struct
		{
	double x,y;
		}vect2d;

void toUnit(vect2d*v)
{
	double m=sqrt(v->x * v->x + v->y * v->y);
	v->x/=m;
	v->y/=m;
}



void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int length1(char * s)
{
	int len=0;
	while(*s != '\0')
	{
		len++;

	}
}

int main(void) {
	int a=2,b=5;
	vect2d v={3,4};

	swap(&a,&b);
	printf("%d %d\n",a,b);

	printf("%f %f \n",v.x,v.y);
	toUnit(&v);
	printf("%f %f \n",v.x,v.y);

	return EXIT_SUCCESS;
}
