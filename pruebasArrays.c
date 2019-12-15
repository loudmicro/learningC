/*prueba e inicio de cero con arrays*/

/*
gcc -Wall -O2 -oprueba pruebasArrays.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10
#define MATRIZX 10
#define MATRIZY 10

void initArray(int n[], int tam, int max);
void printArray(int n[], int tam);
void burbuji(int n[], int tam);
void initMatriz(int m[][MATRIZY], int x, int y, int max);
void printMatriz(int m[][MATRIZY], int x, int y);
void printFila(int m[][MATRIZY], int x, int y, int fila);
void printColumna(int m[][MATRIZY], int x, int y, int columna);
int sumaFila(int m[][MATRIZY], int x, int y, int fila);
int sumaColumna(int m[][MATRIZY], int x, int y, int columna);
void pasoColumnaMatriz2Array(int m[][MATRIZY], int x, int y, int n[], int length, int columna);

int main(void)
{
    int array[LENGTH];
    int matriz[MATRIZX][MATRIZY];

    srand(time(NULL));

    /*arrays*/
    initArray(array, LENGTH, 10);
    printArray(array, LENGTH);
    burbuji(array, LENGTH);
    printArray(array, LENGTH);

    printf("\n");

    /*matrices*/
    initMatriz(matriz, MATRIZX, MATRIZY, 5);
    printMatriz(matriz, MATRIZX, MATRIZY);

    printf("\n");

    printFila(matriz, MATRIZX, MATRIZY, 2);

    printf("\n");

    printColumna(matriz, MATRIZX, MATRIZY, 3);

    printf("la suma de la FILA 2 es= %d\n", sumaFila(matriz, MATRIZX, MATRIZY, 2));
    printf("la suma de la Columna 4 es= %d\n", sumaColumna(matriz, MATRIZX, MATRIZY, 4));

    /*paso de columna de matriz a array*/
    pasoColumnaMatriz2Array(matriz, MATRIZX, MATRIZY, array, LENGTH, 2);
    printArray(array, LENGTH);

    return 0;
}

void initArray(int n[], int tam, int max)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        n[i] = rand() % (max + 1);
    }
}

void printArray(int n[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        printf("%02d ", n[i]);
    }
    printf("\n");
}
void burbuji(int n[], int tam)
{
    int i, j, aux;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (n[j] > n[j + 1])
            {
                aux = n[j + 1];
                n[j + 1] = n[j];
                n[j] = aux;
            }
        }
    }
}

void initMatriz(int m[][MATRIZY], int x, int y, int max)
{
    int i, j;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            m[i][j] = rand() % (max + 1); /* inicializa la matriz con numeros al azar */
        }
    }
}

void printMatriz(int m[][MATRIZY], int x, int y)
{
    int i, j;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printFila(int m[][MATRIZY], int x, int y, int fila)
{
    int i, j;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            if (i == fila)
            {
                printf("%02d ", m[i][j]);
            }
        }
    }
    printf("\n");
}

void printColumna(int m[][MATRIZY], int x, int y, int columna)
{
    int i, j;
    printf("\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            if (j == columna)
            {
                printf("%02d\n ", m[i][j]);
            }
        }
    }
    printf("\n");
}

int sumaFila(int m[][MATRIZY], int x, int y, int fila)
{
    int i, j, suma = 0;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            if (i == fila)
            {
                suma += m[i][j];
            }
        }
    }
    return suma;
}
int sumaColumna(int m[][MATRIZY], int x, int y, int columna)
{
    int i, j, suma = 0;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            if (j == columna)
            {
                suma += m[i][j];
            }
        }
    }
    return suma;
}

void pasoColumnaMatriz2Array(int m[][MATRIZY], int x, int y, int n[], int length, int columna)
{
    int i, j, aux = 0;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (j == columna && aux <= length)
            {
                n[i] = m[i][j];
                
            }
        }
    }
}