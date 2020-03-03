/*
	Juan Victor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDADPRODUCTOS 10

void imprimirArray(int ventas[][5],int vendedores,int productos);
void iniciaRandom(int ventas[][5],int vendedores,int productos);
int imprimirTotalVendedor(int ventas[][5],int vendedor,int productos);
int imprimirTotalProductos(int ventas[][5],int vendedores,int producto);



int main(void)
{
    srand(time(NULL));
    int ventas[4][5]={0};
    int opcion;

    iniciaRandom(ventas,4,5);
    imprimirArray(ventas,4,5);

    printf("De que vendedor quiere saber el total de ventas?\n");
    scanf("%d",&opcion);
    printf("El vendedor %d ha vendido %d productos\n",opcion, imprimirTotalVendedor(ventas,opcion-1, 5) );
    fflush(stdin);

    printf("\n\n------------------------------\n\n");

    printf("De que producto queres saber las ventas totales?\n");
    scanf("%d",&opcion);
    printf("Del producto %d se han vendido %d en total\n",opcion, imprimirTotalProductos(ventas,4, opcion-1) );
    printf("\n\n------------------------------\nFIN\n------------------------------\n");


    return 0;
}

void imprimirArray(int ventas[][5],int vendedores,int productos){
    int i,j;
    for (i = 0; i < vendedores; ++i)
    {
        printf("\nEl vendedor %d:\t\n",i+1 );

        for (j = 0; j < productos; ++j)
        {
            printf("\tDel producto %d se ha vendido: %d\n",j + 1, ventas[i][j]);
        }
        printf("\n");
    }
}

void iniciaRandom(int ventas[][5],int vendedores,int productos){
    int i,j;
    for (i = 0; i < vendedores; ++i)
    {
        for (j = 0; j < productos; ++j)
        {
            ventas[i][j]=rand()%CANTIDADPRODUCTOS;
        }
    }
}

int imprimirTotalVendedor(int ventas[][5],int vendedor,int productos){
    int i,suma = 0;

    for (i = 0; i < productos; ++i)
    {
        suma += ventas[vendedor][i];
    }

    return suma;
}

int imprimirTotalProductos(int ventas[][5],int vendedores,int producto){
    int i,suma = 0;

    for (i = 0; i < vendedores; ++i)
    {
        suma += ventas[i][producto];
    }

    return suma;
}