/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){

	char *texto = "en un lugar de Coin de cuyo nombre no quiero ni saberlo, habia en Coin un cole llamado los montecillos";
	char *subcadena = "Coin";

	char *ptr;


	/*prototipo -> int strleng(ptr) */


	while( (ptr = strstr(texto,subcadena)) != NULL ){

		/*imprime hasta el final y busque a buscar*/
		printf("Esta -> %s\n", ptr);

		texto = ptr + strlen(subcadena);

	}

	return 0;
}
