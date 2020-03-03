/*
	Juan Victor 
*/
#include <stdio.h>

int main(void)
{

	int lado;
	int contador = 10;


	printf("introduzca la medida de uno de los lados del cuadrado:\n");

	/* Dibuja un cuadrado con los asteriscos usando solo printf("*") y  printf(" ") */
	while(contador > 0){


		if (contador % 2 == 1)
		{
			printf(" ");
		}
		lado = 10;
		while (lado > 0 ){

			printf("* ");

			--lado;
		}


		printf("\n");
		--contador;

	}
	return -1;
}