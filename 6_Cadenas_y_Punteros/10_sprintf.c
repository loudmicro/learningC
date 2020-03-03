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

    sprintf(frase, "%s %s %s %s %s %s",articulo[rand() % 5], sustantivo[rand() % 5], verbo[rand() % 5], preposicion[rand() % 5], articulo[rand() % 5], sustantivo[rand() % 5]);

	
	printf("%s\n", frase );


	return 0;
}

