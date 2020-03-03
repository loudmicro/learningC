/*
	Juan Victor 
*/
#include <stdio.h>

int main (void){


	int num, i, veces;

	for (i = 1; i <= 5; ++i)
	{
		do{
			printf("intoroduce el valor numero %d(mayor que 0 y menor que 30): \n", i); /*Pide un numer0*/

			scanf("%d",&num);
		}while(num < 0 || num > 30);

		for (veces = 0; veces < num; ++veces)
		{
			printf("*"); /*imprime la cantidad de asteriscos que hemos metido en la variable veces*/
		}
		printf("\n");

	}

	return 0;
}