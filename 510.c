
/*
gcc -O2 -Wall -o510 510.c
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	float num;

	do{

		printf("Intorduce un numero para calcular su entero mas cercano con la funcion floor (0 para salir) \n");
		scanf("%f",&num);
		printf("El numero introducido es %.2f, y su entero mas cercano es %.2f, y \n", num, floor(num));

	}while(num != 0);


	return 0;
}