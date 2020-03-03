/*
	Juan Victor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void inicializar(int m[][5], int filas, int cols);

void trasponer (int m[][5],int n[][5],int filas, int cols);

void extraerFilas(int m[][5], int vector[], int num_fila, int filas, int cols);

void diagonal(int m[][5], int diagonal[], int filas, int cols);

void intercambiarCol(int m[][5], int c1, int c2, int filas, int cols);

void imprimir(int m[][5], int filas, int cols);

int main(void)
{
	int matriz[5][5];
	int traspuesta[5][5];
	int vect[5];
	int i;

	srand(time(NULL));

	inicializar(matriz, 5, 5);
	imprimir(matriz, 5, 5);
	printf("\n");

	printf("traspuesta: \n");
	trasponer(matriz, traspuesta,5,5);
	imprimir(traspuesta, 5, 5);
	extraerFilas (matriz, vect, 1, 5, 5); /*extraemos la fila 1*/

	printf("Extraer fila 1: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", vect[i] );
	}
	printf("\n");

	diagonal(matriz, vect, 5, 5);
	printf("Diagonal: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", vect[i] );
	}
	printf("\n\n");
	printf("inercambiar columna 1 por columna 2:\n" );
	printf("original:\n");
	imprimir(matriz, 5, 5);
	printf("intercambiadas:\n");
	intercambiarCol(matriz, 1, 2, 5, 5);/*cambiamos columna 1 por columna 2*/
	imprimir(matriz, 5, 5);

	return 0;
}


void inicializar(int m[][5], int filas, int cols){
	int i, j;
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			m[i][j]= (rand()%21)+20; /*inicializa con un numero aleatorio entre 0 y 20 y lo desplaza 20 sitios*/
		}
	}

}
void trasponer (int m[][5],int n[][5],int filas, int cols){
	int i, j;
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			n[j][i] = m[i][j]; /*intercambiando los valores de ixj al guardarla en n[][] nos la traspone*/
		}
	}
}
void extraerFilas(int m[][5], int vector[], int num_fila, int filas, int cols){
	int i, j;
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (j == num_fila) {
				vector[i]=m[i][j]; /*extrae la fila si j coincide*/
			}
		}
	}
}
void diagonal(int m[][5], int diagonal[], int filas, int cols){
int i, j;
	for (i = 0; i < filas; i++){
		for (j = 0; j < cols; j++)
		{
			if (j == i) {
				diagonal[i]=m[i][j]; /*copia en el vector diagonal si i y j coinciden guardando la diagonal [0,0][1,1][2,2]...*/
			}
		}
	}
}

void intercambiarCol(int m[][5], int c1, int c2, int filas, int cols){
	int i, j;
	int aux[5];
	/*cojemos la columna 2 y la guardamos en el array auxiliar*/
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			aux[i]=m[i][c2]; /*extrae la columna si i coincide*/
		}
	}

	/*ahora pasamos los valores de c1 a c2*/
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			m[i][c2]=m[i][c1];

		}
	}

	/*pasamos lo valores de aux a acol1 */
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{

			m[i][c1]=aux[i];

		}
	}


}

void imprimir(int m[][5], int filas, int cols){
	int i, j;
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}
