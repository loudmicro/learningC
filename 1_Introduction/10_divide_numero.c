/*
	Juan Victor 
*/

#include <stdio.h>

int main(void){

	int principal;
	int n1;

	printf("Introduzca un número de 5 cifras:\n");
	scanf("%d",&principal);

	n1 = principal/10000; /* sacamos el primer numero*/
	principal = principal % 10000;
	printf("%d\n",n1 );
	n1 = principal/1000;
	principal = principal % 1000;
	printf("%d\n",n1 );
	n1 = principal/100;
	principal = principal % 100;
	printf("%d\n",n1 );
	n1 = principal/10;
	principal = principal % 10;
	printf("%d\n",n1 );
	n1 = principal/1;
	principal = principal % 1;
	printf("%d\n",n1 );
	return 0;
}