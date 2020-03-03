/*
	Juan Victor 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void iniciar_cero(int array[], int largo);
void contador_letras(char origen[], int largo, int contador_minusculas[], int contador_mayusculas[], char letras_mayusculas[], char letras_minusculas[]);
void imprimir_array_char(char lista[], int largo);
void imprimir_array(int lista[], int largo);
void contador_palabras(char cad[], int contador[]);
void separador(void);
int ocurrencias(const char pajar[], const char aguja[]);

int main(void) {

	char cadena[600];
	char subcadena[100];
	char letras_mayus[27];
	char letras_minus[27];

	int contador_min[26];
	int contador_may[26];
	int contadorpalabras[15];

	int tamanio;

	strcpy(letras_mayus,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");

	strcpy(letras_minus,"abcdefghijklmnopqrstuvwxyz");


	iniciar_cero(contador_min,26);
	iniciar_cero(contador_may,26);
	iniciar_cero(contadorpalabras,15);



	printf("Vamos a analizar alguna cadena, por favor, escriba una frase: ");
	fgets(cadena,600,stdin);
	printf("De acuerdo, vamos a analizar: \n %s\n",cadena );

	tamanio = strlen(cadena);

	separador();

	contador_letras(cadena, tamanio, contador_min, contador_may, letras_mayus,letras_minus);
	printf("Letras Mayusculas: \n");
	imprimir_array_char(letras_mayus,26);
	imprimir_array(contador_may,26);
	printf("Letras minusculas: \n");
	imprimir_array_char(letras_minus,26);
	imprimir_array(contador_min,26);

	separador();

	contador_palabras(cadena, contadorpalabras);

	separador();
	printf("Ahora vamos a buscar una subcadena dentro de la principal:\nQue cadena quieres buscar?\n");
	fgets(subcadena,100,stdin);
	printf("Hay %d ocurrencias de la subcadena\n", ocurrencias(cadena,subcadena) );



	printf("\n");

	return 0;
}

void iniciar_cero(int array[], int largo){
	int i;
	for (i = 0; i <= largo; i++) {
		array[i] = 0;
	}
}

void contador_letras(char origen[], int largo, int contador_minusculas[], int contador_mayusculas[], char letras_mayusculas[], char letras_minusculas[]){
	int i,j;
	/*Minusculas*/

	for (i = 0; origen[i] != '\0'; i++) {

		/*optimizacion para que recorra el array solo con el que corresponde*/
		if(islower(origen[i]) != 0){
			for (j = 0; j <= 26; j++) {
				if (letras_minusculas[j] == origen[i])
				contador_minusculas[j]++;
			}
		}

		if(isupper(origen[i]) != 0){
			for (j = 0; j <= 26; j++) {
				if (letras_mayusculas[j] == origen[i])
				contador_mayusculas[j]++;
			}
		}

	}
}

void imprimir_array_char(char lista[], int largo){
	int i;
	for (i = 0; i < largo; i++) {
		printf("%c ",lista[i] );
	}
	printf("\n");
}

void imprimir_array(int lista[], int largo){
	int i;
	for (i = 0; i < largo; i++) {
		printf("%d ",lista[i] );
	}
	printf("\n");
}


void separador(void){
	int i;
	printf("\n\n");
	for ( i = 0; i < 26; ++i)
	{
		printf("-*");
	}
	printf("\n\n");
}


void contador_palabras(char cad[], int contador[]){
	char separador[]= " (),.-_¡!?¿:;+-*=$€@\n";
	char cad_machacable[600];
	char *ptr = NULL;
	int i;
	strcpy(cad_machacable,cad);

	ptr = strtok(cad_machacable,separador);

	while (ptr != NULL) {
		contador[strlen(ptr)]++;
		ptr = strtok(NULL,separador);
	}

	for (i = 0; i < 15; i++) {
		if (contador[i] != 0) {
			printf("Cantidad de palabras de largo %d ---->%d \n",i, contador[i] );
		}
	}

}

int ocurrencias(const char pajar[], const char aguja[]){
	int contador = 0;
	char *ptr;

	printf("pajar-> %s\naguja-> %s",pajar, aguja );

	ptr = strstr(pajar,aguja);
	printf("\n\nencontrado en --------> %s\n", ptr);
	/*
	while(ptr != NULL){
	printf("%d\n",contador );
	contador++;
	ptr += strlen(ptr);
	ptr = strstr(cad,subcad);
	};
	*/

return contador;
}
