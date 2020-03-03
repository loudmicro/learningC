/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	/*iniciamos las variables en float que puedan contener decimales y en int las enteras*/
	float prestamo, tasa; 
	int dias;

	printf("Introduzca el total del prestamo (-1 para salir): \n"); /*Solicitamos el primer dato fuera del while para tener salida directa*/
	scanf("%f",&prestamo);

	while(prestamo != -1){ /*prestamo como centinela del while */

		/* pedimose intorucimos los datos en las variables*/
		printf("introduzca la tasa de interés: \n");
		scanf("%f", &tasa);
		printf("introduzca el periodo de dias:\n");
		scanf("%d", &dias);
		/*calculamos el total dentro del printf*/
		printf("el interes es de: € %.2f\n \n", prestamo * tasa * dias / 365 );
		printf("******************\n\n");
		printf("Introduzca el total del prestamo (-1 para salir): \n");
		scanf("%f",&prestamo);


	}


	return 0;
}