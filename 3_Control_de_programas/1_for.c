/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	
	int contador, suma = 0, entero;

	printf("¿Cuántos numeros va a introducir: \n");
	scanf("%d", &contador);

	for (int i = 1; i <= contador; ++i)
	{
		printf("introduzca el valor %d\n", i);
		scanf("%d", &entero);
		suma = suma + entero;

	}

	printf("El resultado es: %d\n", suma );

	return 0;
}