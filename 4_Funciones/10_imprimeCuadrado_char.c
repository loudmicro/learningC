/*
	Juan Victor 
*/
#include <stdio.h>

void imprimeCuadrado(int longitud, char caracter);

int main() {
	int lados;
	char caracter;
	printf("introduzca el largo del lado del cuadrado:\n");
	scanf("%d",&lados);
	fflush(stdin); /*investigando la stdio.h encontre esta funcion que limpia el buffer del teclado para no tner problemas con el intro*/
	printf("Introduce que tipo de caracter quieres utilizar:\n");
	scanf("%c",&caracter );
	imprimeCuadrado(lados, caracter);

	return 0;
}
/*
funcion que coje los datos y imprime un cuadrado de base x altura correspondiente
teniendo en cuenta el char que ha introducido para usarlo para pintar dicho cuadrado
*/
void imprimeCuadrado(int longitud, char caracter){
	int filas, i;
	filas = longitud;
	for (i = 0; i < filas; i++) {
		for (longitud = 0; longitud < filas; longitud++) {
			printf("%c", caracter);
		}
		printf("\n");
	}

}
