/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main(void)
{

	char cad1[5], cad2[5];
	int resul;

	printf("Introduce la primera cadena\n");
	fgets(cad1, 5, stdin);
	printf("Introduce la segunda cadena\n");
	fgets(cad2, 5, stdin);
	resul = strcmp(cad1,cad2);
	printf("%d\n",resul );
	if (resul == 0) {
		printf("las cadenas son iguales\n");
	}else if (resul == 1) {
		printf("la primera cadena es posterior que la segunda\n");
	}else if (resul == -1) {
		printf("la primera cadena es anterior que la segunda\n");
	}


	return 0;
}
