/*
	Juan Victor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void iniciarArray(int n[], int tam);
void imprimirArray(int n[], int tam);
void iniciarMatriz(int c[][10], int x, int y);
void imprimirMatriz(int c[][10], int x, int y);

void cubetismo(int n[], int tam, int c[][10], int x, int y);

int main(void)
{

	/*seed*/
	srand(time(NULL));

	int n[5];
	int cubeta[5][10];

	iniciarArray(n, 5);
	imprimirArray(n, 5);

	iniciarMatriz(cubeta, 5, 10);
	imprimirMatriz(cubeta, 5, 10);

	cubetismo(n, 5, cubeta, 5, 10);

	return 0;
}

void iniciarArray(int n[], int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		n[i] = rand() % 100;
	}
}

void imprimirArray(int n[], int tam)
{
	int i;

	for (i = 0; i < tam; i++)
	{
		printf("%02d \n", n[i]);
	}
}

void iniciarMatriz(int c[][10], int x, int y)
{
	int i, j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			c[i][j] = 0;
		}
	}
}

void imprimirMatriz(int c[][10], int x, int y)
{
	int i, j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%02d ", c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void cubetismo(int n[], int tam, int c[][10], int x, int y)
{
	int i, j;

	for (i = 0; i < tam; i++)
	{
		if (c[0][i] == 0)
		{
			c[0][n[i] / 10] = n[i];
		}

	}

	imprimirArray(n, 5);

	/*
	for(i=0; i < tam; i++){
		if(c[0][i]==0){
			c[0][n[i]/10]=n[i];
		}else{
      c[1][n[i]/10]=n[i];
    }
	}
*/
	imprimirMatriz(c, 5, 10);
}
