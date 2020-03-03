/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	int contador=0, numero, mayor=0;

	printf("introduzca un numero: \n");
	scanf("%d",&numero);
	/* itera entre 10 numeros y va guardando el mayor en la variable mayor  */
	while (contador < 10){

		if (numero > mayor)
		{
			mayor = numero;
		}

		printf("introduzca otro numero: \n");
		scanf("%d",&numero);
		contador++;

	}

	printf("el numero mayor es: %d\n", mayor);
	return 0;
}