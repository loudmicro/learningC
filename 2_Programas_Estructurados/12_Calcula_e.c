/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
 	float calculo, total = 1, producto = 1, ex=1;
 	int contador=1, pedido;

	printf("introduzca el valor de X para e^x \n");
	scanf("%d", &pedido);

	/*Dentro de este while calculamos el valor de numero e*/
	while (contador <= 10){

		producto =  producto * contador;
		total = total + (1/producto);

		contador++;
	}
	contador=1;
	ex = total;
	/*dentro de este while elevamos e a la potencia que equivale a el número que ha introducido el usuario*/
	while (contador < pedido){

		ex = ex * total;

	    contador++;
	}

	printf("e elevado a x es= %.4f\n",ex );


	return 0;
}