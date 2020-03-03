/*
	Juan Victor 
*/
#define TRUE 0


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*Escribe un programa que lea una serie de cadenas y que imprima solamente aquellas cadenas que empiecen con la letra 'b'*/

void separador(void);

void contador_palabras(char cad[]);

int main(void)
{
	char cadena[] = "When I look into your eyes\nI can see a love restrained\nBut darlin' when I hold you\nDon't you know I feel the same\nNothin' lasts forever\nAnd we both know hearts can change\nAnd it's hard to hold a candle\nIn the cold November rain\nWe've been through this such a long long time\nJust tryin' to kill the pain, oo yeah\nBut love is always coming and love is always going\nAnd no one's really sure who's lettin' go today\nWalking away";

	void separador(void);

	printf("%s\n", cadena);

	separador();

	contador_palabras(cadena);

	separador();


	return 0;
}

void contador_palabras(char cad[]){
	char separador[]= " (),.-_¡!?¿:;+-*=$€@\n";
	char cad_machacable[600];
	char letra1 = 'b', letra2 = 'B';
	char *ptr = NULL;
	int i = 0;
	strcpy(cad_machacable,cad);


	ptr = strtok(cad_machacable,separador);
	printf("Palabras que empiezan por 'b':\n");
	while (ptr != NULL) {
		i++;
		ptr = strtok(NULL,separador);
		if (strchr(ptr,letra1) || strchr(ptr,letra2)) {
			printf("\t%s\n",ptr );
		}
	}
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
