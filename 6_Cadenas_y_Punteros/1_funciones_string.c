/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{

	char caracter;

	printf("introduce un caracter: ");
	scanf("%c",&caracter);

	printf("01. ¿Es digito? = %d\n", isdigit(caracter));
	printf("02. ¿Es una letra? = %d\n", isalpha(caracter));
	printf("03. ¿Es digito o una letra? = %d\n", isalnum(caracter));
	printf("04. ¿Es Hexadecimal? = %d\n", isxdigit(caracter));
	printf("05. ¿Es minuscula? = %d\n", islower(caracter));
	printf("06. ¿Es Mayuscula? = %d\n", isupper(caracter));
	printf("07. ¿Es un espacio en blanco? = %d\n", isspace(caracter));
	printf("08. ¿Es un caracter de control? = %d\n", iscntrl(caracter));
	printf("09. ¿Es signo de puntuacion? = %d\n", ispunct(caracter));
	printf("10. ¿Es un caracter de impresion? = %d\n", isprint(caracter));
	printf("11. ¿Es un caracter de impresion diferente al espacio ' ' ? = %d\n", isgraph(caracter));

	return 0;
}