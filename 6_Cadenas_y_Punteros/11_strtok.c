/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){

	char texto[16] =  "";
	char *ptr = NULL;
	char separador[]= ")( -";
	
	int nroarea;
	char nro_tel[8];
	long int nrotel;


	printf("introduce un numero de telefono en formato (555) 555-5555 \n");
	fgets(texto,15,stdin);


	ptr = strtok(texto,separador);

	nroarea = atoi(ptr);
	printf("%s\n",texto );


	/*llamadas sucesivas para seguir extrayendo el token*/

	/*la segunda llamada lleva null porque la funcion guarda el estado anterior*/
	strcpy(nro_tel,"");
	while((ptr = strtok(NULL, separador)) != NULL )
		strcat(nro_tel,ptr);


	/*pasamos a long*/

	nrotel = atol(ptr);

	printf("codigo de area: %d, Numero de telefono %ld \n", nroarea, nrotel );

	return -2;
}
