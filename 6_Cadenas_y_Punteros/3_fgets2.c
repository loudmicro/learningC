/*
	Juan Victor 


escribe un programa que lea una liena de texto con gets() y que la introduzca en el arreglo s[100]
imprimela con mayusculas y con minusculas
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pasar_a_may(char *str, int t);
void pasar_a_min(char *str, int t);

int main(void)
{

	char s[100];
	char cs[100];

	printf("Introduce una linea de texto\n");
	/* gets(s); no se usa, porque no se indica el tamapño del array*/
	/*fegts es mas segura*/
	fgets(s, 99, stdin);
	printf("la cadena es: %s\n",s);

	
	printf("La cadena en mayuscula es: \n");
	strcpy(cs,s);
	pasar_a_may(s,100);
	printf("%s\n", s);
	printf("La cadena en Minusculas es es: \n");
	pasar_a_min(s,100);
	printf("%s\n",s );

	return 0;
}

void pasar_a_may(char *str, int t){
	int i;
	for (i = 0; i < (t-1); i++)
	{
		str[i]=toupper(str[i]);
	}

}
void pasar_a_min(char *str, int t){
		int i;
	for (i = 0; i < (t-1); i++)
	{
		str[i]=tolower(str[i]);
	}

}