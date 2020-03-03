/*
	Juan Victor 
*/

#include <stdio.h>

int impar(int numero);

int main(void) {

	int numero;
	printf("introduce un numero:\n");
	scanf("%d",&numero);
	printf("el numero %d es ",numero);
	/*llamamos ala funcion impar para comprobar si es par o impar*/
	if (impar(numero) == 1) {
		printf("impar\n");
	}else{
		printf("par\n");
	}

	return 0;
}
int impar(int numero){
	if (numero % 2 == 1) {
		return 1; /* devuelve 1 si es impar*/
	}
	return 0;
}
