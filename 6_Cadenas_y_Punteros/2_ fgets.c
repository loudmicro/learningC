/*
	Juan Victor 
*/

/*
escribe un programa que lea una liena de texto con gets() y que la introduzca en el arreglo s[100]
imprimela con mayusculas y con minusculas
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void pasar_a_may(char *str);
void pasar_a_min(char *str);

int main(void)
{

	char s[100];

	printf("Introduce una linea de texto\n");
	/* gets(s); no se usa, porque no se indica el tamapño del array*/
	/*fegts es mas segura*/
	fgets(s, 99, stdin);
	printf("la cadena es: %s\n",s);


	printf("La cadena en mayuscula es: %s\n", strupr(s) );
	printf("La cadena en Minusculas es es: %s\n", strlwr(s) );
	

	return 0;
}
