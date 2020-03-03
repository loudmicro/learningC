/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main(void)
{

	char cad1[5], cad2[5];
	int resul ,caracteres;

	printf("Introduce la primera cadena\n");
	gets(cad1);
	printf("Introduce la segunda cadena\n");
	gets(cad2);
	printf("cuantos caracteres quieres comparar?\n" );
	scanf("%d", &caracteres);
	resul = strncmp(cad1,cad2,caracteres);
	if (resul == 0) {
		printf("las cadenas son iguales\n");
	}else if (resul == 1) {
		printf("la primera cadena es posterior que la segunda\n");
	}else if (resul == -1) {
		printf("la primera cadena es anterior que la segunda\n");
	}


	return 0;
}
