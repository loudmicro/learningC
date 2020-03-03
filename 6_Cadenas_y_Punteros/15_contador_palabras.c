/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contador_palabras(char cad[]);
void separador(void);

int main(void)
{

	separador();

	char cadena[] = "\n\tThere's a lady who's sure\n\tAll that glitters is gold\n\tAnd she's buying a stairway to heaven.\n\tWhen she gets there she knows\n\tif the stores are all closed\n\twith a word she can get what she came for.\n\tAnd she's buying a stairway to heaven";

	void separador(void);

	printf("%s\n", cadena);

	separador();

	printf("La cadena tiene: %d palabras\n",contador_palabras(cadena));

	separador();

	return 0;
}

int contador_palabras(char cad[]){
	char separador[]= " (),.-_¡!?¿:;+-*=$€@\n";
	char cad_machacable[600];
	char *ptr = NULL;
	int i = 0;
	strcpy(cad_machacable,cad);

	ptr = strtok(cad_machacable,separador);

	while (ptr != NULL) {
		i++;
		ptr = strtok(NULL,separador);
	}
	return i;
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
