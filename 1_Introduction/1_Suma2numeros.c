/*
	Juan Victor 
*/

#include <stdio.h>



int main(void)
{
	/* Declaracion de variables */
	int num1;
	int num2;

	/*Asigno variables */

	printf("Introduzca el primer numero: \n");
	scanf("%d", &num1);
	printf("introduzca el segundo número:\n");
	scanf("%d", &num2);

	printf("El primer número es %d y el segundo es %d\n",num1, num2 );
	printf("la suma es %d\n", num1 + num2 );
	printf("la resta s %d\n",num1 - num2 );
	printf("el producto es %d\n",num1 * num2 );
	printf("la división es %d\n", num1 / num2 );
	printf("el resto de la division es %d\n", num1 % num2 );
	printf("EOM\n");
	return 0;
}