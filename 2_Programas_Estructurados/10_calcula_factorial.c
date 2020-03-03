/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	int calculo, factorial = 1, contador = 1;

	printf("introduzca el factorial\n");
	scanf("%d", &calculo);

	/*Calculamos el factorial del numero que ha metido el usuario*/
	while (contador <= calculo){

		printf("%d  ", contador);

		 factorial = factorial * contador;

		contador++;
	}

	printf("\n %d !n factorial es %d \n",calculo, factorial);


	return 0;
}