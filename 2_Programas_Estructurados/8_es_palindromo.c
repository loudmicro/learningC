/*
	Juan Victor 
*/

#include <stdio.h>

int main(void){

	int principal;
	int n1, n2, n3, n4, n5;

	printf("Introduzca un número de 5 cifras:\n");
	scanf("%d",&principal);
	/*Separamos todos los numeros y los guardamos en variables individuales para poder compararlos luego*/
	n1 = principal/10000; 
	principal = principal % 10000;
	n2 = principal/1000;
	principal = principal % 1000;
	n3 = principal/100;
	principal = principal % 100;
	n4 = principal/10;
	principal = principal % 10;
	n5 = principal/1;
	principal = principal % 1;
	/* 
	Si el primer numero y el ultimo son iguales, que evalue si el segundo y el cuarto numero son iguales,
	si las dos condiciones son correctas es palindromo
	*/
	if (n1 == n5)
	{
		if (n2 == n4)
		{
			printf("Es palindromo\n");
		}
		

	}else {
	printf("no es palindromo\n");
	}
	return 0;
}