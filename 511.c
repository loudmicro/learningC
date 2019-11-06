
/*
gcc -O2 -Wall -o511 511.c
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

	printf("Intorduce un numero (0 para salir) \n");
	scanf("%f",&num);
	printf("A-  %.3f\n",redondeaEntero(num));
	printf("B-  %.3f\n",redondeaDecimas(num));
	printf("C-  %.3f\n",redondeaCentesimas(num));
	printf("D-  %.3f\n",redondeaMilesimas(num));

	return 0;
}

float redondeaEntero (float num){
	return floor(num);
}

float redondeaDecimas (float num){
	return floor(num * 10 + .5) / 10;
}
float redondeaCentesimas (float num){
	return floor(num * 100 + .5) / 100;
}
float redondeaMilesimas (float num){
	return floor(num * 1000 + .5) / 1000;
}