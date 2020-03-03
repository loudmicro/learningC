/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	float calculo, total = 1, producto = 1;
 	int contador=1;

	printf("introduzca el factorial\n");

	/*Calculamos el factorial del numero que ha metido el usuario*/
	while (contador <= 10){

		 producto =  producto * contador;
		 total = total + (1/producto);

		contador++;

		printf(" producto es : %.2f \n", producto);
		printf(" total es : %.2f \n", total);

	}

	printf("%.5f\n", total );


	return 0;
}