/* probando el rand */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int genera_numero (int min, int max);

int main(void)
{
	int numero, adivinar, minimo, maximo, veces=0;

	srand(time(NULL));/* generador de semillas*/
	
	
	printf("Vamos a adivinar un número\n--------------\n\n");
	printf("Dime un minimo y un maximo\n");
	scanf("(%d,%d)",&minimo, &maximo);
	adivinar = genera_numero(minimo,maximo);
	do{
		printf("Introduce un número: (min,max)\n");
		scanf("%d",&numero);
		if (numero < minimo || numero > maximo)
		{
			printf("numero fuera de rango..... (que los has metido tu pisha, alikindoi)\n");
			continue;
		}
		if (numero < adivinar)
		{
			printf("te has quedado corto, el numero a adivinar es mas grande!\n\n");
		}else{
			printf("Te has pasado! prueba con uno mas pequeño\n\n");
		}
		veces++;
	}while ( numero != adivinar);
	printf("LO HAS CONSEGUIDO!!! el número era el %d\n", adivinar );
	printf("lo has hecho en %d intentos\n", veces);


	return 0;
}

int genera_numero (int min, int max){
	int longitud = max-min+1;
	return rand() % longitud + min;
}
