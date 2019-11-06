
/*
gcc -O2 -Wall -o515 515.c -lm
*/

#include <stdio.h>
#include <math.h>

float hipotenusa (float, float);

int main(void)
{
	float ladoA,ladoB;
	printf("Introduce el primer lado del triangulo \n");
	scanf("%f",&ladoA);
	printf("Introduce el seguno lado del triangulo \n");
	scanf("%f",&ladoB);
	printf("la hipotenusa es %f \n", hipotenusa(ladoA,ladoB));
	return 0;
}
float hipotenusa (float ladoA, float ladoB){
	return sqrt(pow(ladoA,2) + pow(ladoB,2));
}