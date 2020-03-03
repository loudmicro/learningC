/*
	Juan Victor 
*/
#define TAM 600
#define TRUE 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*

gcc -Wall -o824 824.c
un programa que encuentre las palabras que terminen en ed
(en ingles hay muchas con ed pero en español menos asi que voy a poner 'on') ç
y las imprima*/
void buscador(char cad[]);

int main(void){

	char cadena[TAM] ="el veloz murcielago hindu \nbajo del monte con mucha emocion \nporque habia comido muchos insectos \ny no le habia dado indigestion\n";

	printf("%s\n",cadena );
	buscador(cadena);
return 0;

};

void buscador(char cad[]){
	char *ptr = NULL;
	char cadena_machacable[TAM];
	char separador[]=" ,.;:\n-\t";
	char sufijo[] = "on";

	strcpy(cadena_machacable,cad);

	ptr = strtok(cadena_machacable,separador);
	while(ptr != NULL){


		if(termina_con(ptr,sufijo)==0){
		printf("\t%s\n",ptr);
		};

		ptr = strtok(NULL,separador);
	};

}

int termina_con(char subcadena[], char sufijo[]){
	/*retorna 0 si la cadena termina con el sufijo*/
	int tam_cadena, tam_sufijo, n;
	/*
	tam_cadena = strlen(subcadena);
	tam_sufijo = strlen(sufijo
	*/
	n = strlen(subcadena) - strlen(sufijo);

	return strcmp(subcadena+n,sufijo);


}
