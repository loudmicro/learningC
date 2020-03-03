/*
	Juan Victor 
*/

#include <stdio.h>
#include <math.h>

float redondeaEntero (float);
float redondeaDecimas (float);
float redondeaCentesimas (float);
float redondeaMilesimas (float);

int main(void)
{
	float num;
	/*vamos a redondear un numero a X decimales*/
	printf("Intorduce un numero (0 para salir) \n");
	scanf("%f",&num);
	printf("A-  %.3f\n",redondeaEntero(num));
	printf("B-  %.3f\n",redondeaDecimas(num));
	printf("C-  %.3f\n",redondeaCentesimas(num));
	printf("D-  %.3f\n",redondeaMilesimas(num));

	return 0;
}
/*Esta funcion redondea el numero hasta un entero */
float redondeaEntero (float num){
	return floor(num);
}
/*Esta funcion redondea el numero hasta un decimal */
float redondeaDecimas (float num){
	return floor(num * 10 + .5) / 10;
}
/*Esta funcion redondea el numero hasta dos decimales */
float redondeaCentesimas (float num){
	return floor(num * 100 + .5) / 100;
}
/*Esta funcion redondea el numero hasta tres decimales */

float redondeaMilesimas (float num){
	return floor(num * 1000 + .5) / 1000;
}
