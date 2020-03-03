/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	float kilometros = 0, litros = 0, total = 0, totalKm = 0, totalLitros = 0; /*declaramos las variables*/

	/* imprimimos la bienvenida y la primera instruccion*/
	printf("Bienvenido al Programa de cálculo del cuantos kilometros por litro gastamos\n ");

	/*usamos un bucle con el centinela litros de salida*/

	printf("introduzca la  cantidad de kilometros: \n");
	scanf("%f", &kilometros);
	totalKm += kilometros;

	while(kilometros != -1){


		printf("Introduzca la  cantidad de litros gastados: \n");
		
		scanf("%f", &litros);
		
		/* incluimos manejo de errores, el programa tiene una variable dentro de una division y asi evitamos que el valor sea 0*/
		while (litros == 0)	{
			printf("introduzca un valor DIFERENTE a 0:\n");
			scanf("%f", &litros);
		}

		totalLitros += litros;

		printf("litros consumidos por kilometro: %.2f \n", kilometros / litros );

		printf("introduzca la  cantidad de kilometros: \n");
		scanf("%f", &kilometros);
		totalKm += kilometros;

	}/* Aqui da el resultado si kilometros, y si no se ha introducido ningun dato avsa y termina*/
	if (kilometros > 0)
	{
		total = totalKm / totalLitros;
		printf("Has gastado %.2f litros por kilometros\n", total);
	}else{
		printf("no ha introducido datos\n");
	}



	return 0;
}