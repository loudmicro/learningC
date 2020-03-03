/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	unsigned char veces, columnas;



	for (veces = 5; veces > 0; --veces){ /* dibuja la mitad de arriba, lo he separado en 3 triangulos*/


		for (columnas = 1; columnas < veces; ++columnas)
			printf(" ");/*Primer Triangulo*/
		for (columnas = 5; columnas >= veces; --columnas)
			printf("*");/*Segundo Triangulo*/
		for (columnas = 5; columnas > veces; --columnas)
			printf("*");/*Tercer triangulo*/
		printf("\n");
	}

	for (veces = 4; veces > 0; --veces){ /* dibuja la mitad de abajo*/

		for (columnas = 5; columnas > veces; --columnas)
			printf(" ");
		for (columnas = 1; columnas <= veces; ++columnas)
			printf("*");
		for (columnas = 1; columnas < veces; ++columnas)
			printf("*");

		printf("\n");
	}


	printf("\n");

	return 0;
}