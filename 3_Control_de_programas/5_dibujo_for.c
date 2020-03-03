/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	unsigned char veces, columnas;

 	/* 10 filas 10 columnas*/
 	printf("A) \n");
	for (veces = 10; veces > 0; --veces){

		/* segundo caso*/

		for (columnas = 10; columnas > veces; --columnas)
		{
			printf("*");
		}
	printf("\n");
	}

	printf("B)\n");
	for (veces = 10; veces > 0; --veces){ /* realiza las dos primeras columnas*/

		/*primer caso */
		for (columnas = 1; columnas < veces; ++columnas)
		{
			printf("*");
		}
		printf("\n");
		}


	printf("C)\n");
	for (veces = 10; veces > 0; --veces){ /* realiza las dos primeras columnas*/



		for (columnas = 10; columnas > veces; --columnas)
		{
			printf(" ");
		}


		/*asteriscos*/
		for (columnas = 1; columnas < veces; ++columnas)
		{
			printf("*");
		}
		printf("\n");
		}

	printf("D)\n");
	for (veces = 10; veces > 0; --veces){ /* realiza las dos primeras columnas*/

		/*primer caso */
		for (columnas = 1; columnas < veces; ++columnas)
		{
			printf(" ");
		}
		for (columnas = 10; columnas > veces; --columnas)
		{
			printf("*");
		}


		printf("\n");
		}




	printf("\n");

	return 0;
}