/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	/* Declaracion de variables */
	int a;
	int b;
	int c;

	printf("introduzca el primer entero: \n");
	scanf("%d",&a);
	printf("introduzca el segundo: \n");
	scanf("%d",&b);
	printf("introduzca el tercero: \n");
	scanf("%d",&c);
	printf("los numeros son: %d, %d y %d\n",a,b,c );

	if (a > b)
	{
		if (a > c)
		{
			printf("el mayor es %d\n",a );
		}
	}

	if (b > c)
	{
		printf("el mayor es %d\n", b);
	}
	if (c > b)
	{
		printf("el mayor es %d\n",c);
	}
	printf("la suma de los numeros es %d\n",a+b+c );
	printf("el producto es: %d\n",a*b*c );
	printf("el promedio es: %d\n",a+b+c/3 );
	return 0;
}