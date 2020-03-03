/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	/* Declaracion de variables */
	int n1;
	int n2;

	printf("introduzca el primer entero: \n");
	scanf("%d",&n1);
	printf("introduzca el segundo: \n");
	scanf("%d",&n2);
	printf("los numeros son: %d y %d\n",n1,n2 );

	if (n1>n2)
	{
		printf("El primero es mayor\n");
	}
	if (n1<n2)
	{
		printf("el primero es menor\n");
	}
	if (n1 == n2)
	{
		printf("son iguales\n");
	}
	
	return 0;
}