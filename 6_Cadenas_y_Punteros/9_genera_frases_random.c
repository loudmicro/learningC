/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(void)
{

	char *articulo[] = {"el", "la", "un", "algun", "cualquier"};
	char *sustantivo[] = {"ninio", "ninia", "perro", "pueblo", "carro"};
	char *verbo[] = {"condujo","brinco","corrio","camino", "salto"};
	char *preposicion[] = {"hacia", "desde", "sobre", "bajo", "en"};
	char frase[255];
	int i;

	/*inicializa la frase a 0*/
	strcpy(frase,"");

	srand(time(NULL));

	/*genera el articulo*/

	i = rand() % 5;
	strcpy(frase, articulo[i]);
	strcat(frase," ");
	

	/*Sustantivo*/
	strcat(frase, sustantivo[rand() % 5]);
	strcat(frase," ");

	/*verbo*/
	strcat(frase, verbo[rand() % 5]);
	strcat(frase," ");


	/*preposicion*/
	strcat(frase, preposicion[rand() % 5]);
	strcat(frase," ");

	/*genera el articulo*/

	i = rand() % 5;
	strcat(frase, articulo[i]);
	strcat(frase," ");

	/*Sustantivo*/
	strcat(frase, sustantivo[rand() % 5]);
	strcat(frase," ");

	printf("%s\n", frase );


	return 0;
}

