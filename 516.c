/*
gcc -O2 -Wall -o516 516.c
v0.2
*/

#include <stdio.h>

int potenciaInt (int base, int exponente);

int main(void)
{
	int base,exponente;
	printf("Introduce la base \n");
	scanf("%d",&base);
	printf("Introduce el exponente \n");
	scanf("%d",&exponente);
	printf("el resultado de %d elevado a %d  es: %d",base, exponente, potenciaInt(base,exponente));
	return 0;
}
int potenciaInt (int base, int exponente){
	int num = 1, i;

	for (i = 1; i <= exponente; i++) {
		num *= base;
	}
	return num;

}
