/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	/* Declaracion de variables */
	int n1;
	int n2;
	int n3;
	int n4;

	n1 = 1;
	n2 = 2;
	n3 = 3;
	n4 = 4;


	printf("sin utilizar especificadores de conversion:\n");
	printf("1 2 3 4\n");
	printf("Utilizando especificadores de conversion\n");
	printf("%d %d %d %d\n",n1, n2, n3, n4 );
	printf("mediante 4 printf: \n");
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 \n");


	
	return 0;
}