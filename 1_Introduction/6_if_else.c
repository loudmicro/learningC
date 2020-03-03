/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	/* Declaracion de variables */
	int a;


	printf("intoduce un numero: \n");
    scanf( "%d", &a );
    if (a%2 == 0)
    {
       printf("el numero es par\n");
    }else
    {
        printf("el numero es impar\n");
    }
	return 0;
}