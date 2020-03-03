/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 
	int numCC, cargos;
	float saldo, creditos, limite, saldo_inicial;

	printf("Introduce el numero de cuenta (-1 para salir)\n");
	scanf("%d",&numCC);
	/* Bucle para pedir los datos con el centinela -1*/
	while(numCC != -1){

		printf("introduzca el saldo inicial:\n");
		scanf("%f",&saldo_inicial);

		printf("introduzca el total de  cargos:\n");
		scanf("%d",&cargos);

		printf("introduzca el total de créditos:\n");
		scanf("%f",&creditos);

		printf("introduzca el limite de credito:\n");
		scanf("%f",&limite);
		/*Calculamos el saldo*/
		saldo = saldo_inicial + (float) cargos - creditos;

		printf("cuenta: %d \n", numCC);			
		printf("Limite de Credito: %.2f \n",limite );	
		printf("saldo: %.2f\n",saldo );
		/* comprobamos si se cumple el requisito o no*/
		if (saldo > limite){
			printf("Limite de crédito exedido\n");
			} else {
			printf("Limite de credito no superado\n");
			}
		
		printf("Introduce el numero de cuenta (-1 para salir)\n");
		scanf("%d",&numCC);



	}

	return 0;
}