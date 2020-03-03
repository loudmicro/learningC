/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{

	int lado;
	int veces, contador;


	printf("introduzca la medida de uno de los lados del cuadrado:\n");
	scanf("%d", &lado);
	/*Dibuja un cuadrado de las dimensiones introducidas*/
	veces = lado;
	contador = lado;
	/*Itera 2 whiles, el interno para pintar los asteriscos y el externo para pasar a la siguente liena*/
	while(contador > 0){
		lado = veces;

		while (lado > 0 ){

			printf("*");

			--lado;
		}

		printf("\n");
		--contador;

	}
	return -1;
}