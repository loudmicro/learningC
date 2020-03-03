/*
	Juan Victor 
*/
#include <stdio.h>

double fibo(double n);

int main(void)
{
	/*llamamos a la funcion fibo para que nos evuelva la posicion 15 de fibonacci*/
	printf("La frecuencia de fibonacci 15 es %lf.0\n", fibo(15));
	return 0;
}

double fibo(double n){
	if (n==0)
	{
		return 0;
	}else if (n==1)
	{
		return 1;
	}else
		return fibo(n-1) + fibo(n-2);
}
