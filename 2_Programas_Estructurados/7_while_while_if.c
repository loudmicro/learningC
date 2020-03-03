/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	int filas, columnas = 0, tam;

	printf("introduzca la medida de uno de los lados del cuadrado:\n");

	scanf("%d", &tam);

	/*Bucle de las columnas que se repite hasta llegar al tamaño introducido por el usuario*/
	while (columnas < tam){

		/*Reiniciamos el numero de filas con cada iteracion y abrimos otro while que las dibuje*/
		filas = 0;
		while ( filas < tam ){

			if (columnas == 0 || columnas == tam-1){
				printf("*"); /* si es la primera columna o la ultima que dibuje todos los asteriscos*/
			}else {
				printf("%s", filas == 0 || filas == tam-1 ? "*" : " " ); /*pinta asterisco o espacios dependiendo de la ubicacion*/
				
				}
			++filas;
		}
		
		printf("\n");
		
		columnas++;

	}


	return -1;
}