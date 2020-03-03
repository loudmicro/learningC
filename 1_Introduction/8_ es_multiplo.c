/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	/* Declaracion de variables */
	int a;
	int b;

	printf("intoduce el primer numero: \n");
    scanf( "%d", &a );
	printf("intoduce el segundo numero: \n");
    scanf( "%d", &b );



    if (a <= b)
    {
       printf("no es multiplo");
    }

    if (a > b)
    {
    	if (a % b == 0)
    	{
    		printf("Es múltiplo\n");
    	}
    	if (a % b != 0)
    	{
    		printf("NO es multiplo\n");
    	}
    }
    
	return 0;
}