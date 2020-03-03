/*
	Juan Victor 
*/
#include <stdio.h>

void imprimeCuadrado(int longitud);

int main() {
	int lados;
	/*pedimos los lados de cuadrado*/
	printf("introduzca el largo del lado del cuadrado:\n");
	scanf("%d",&lados );
	imprimeCuadrado(lados);/*llamamos a la funcion para que imprima*/
	return 0;
}
/*funcion que coje los datos y imprime un cuadrado de base x altura correspondiente*/
void imprimeCuadrado(int longitud){
	int filas, i;
	filas = longitud;
	for (i = 0; i < filas; i++) {
		for (longitud = 0; longitud < filas; longitud++) {
			printf("*");
		}
		printf("\n");
	}

}
