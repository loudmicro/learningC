/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	int calculo, contador;
 	long long factorial = 1; /*ponemos un long long porque los factoriales cojen numeros muy grandes*/

	printf("introduzca el factorial\n");
	scanf("%d", &calculo);


	for (contador = 1; contador <= calculo; ++contador)
	{
		factorial = factorial * contador;
		printf("%lld    ",factorial );
	}

	printf("\n");



	return 0;
}