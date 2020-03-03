/*
	Juan Victor 
*/

#include <stdio.h>
void inicializarCero(int ventas[31][4][5], int vendedor, int productos);
void imprimirArray(int ventas[31][4][5], int vendedor, int productos);
int main(void) {
    /* En este array el primer indice son los días del mes, el segundo los vendedores y el tercero los productos */
    int ventas[31][4][5];
    int i,j,k;

    inicializarCero(ventas,4,5);
    imprimirArray(ventas,4,5);


    return 0;
}
void inicializarCero(int ventas[31][4][5], int vendedor, int productos){
    int i, j, k;
    for (i= 0; i < 31; i++) {
        for (j= 0; j < vendedor; j++) {
            for (k= 0; k< productos; k++) {
                ventas[i][j][k]=0;
            }
        }
    }
}

void imprimirArray(int ventas[31][4][5], int vendedor, int productos){
    int i, j, k;
    for (i= 0; i < 31; i++) {
        for (j= 0; j < vendedor; j++) {
            for (k= 0; k< productos; k++) {
                printf("dia %03d\tvendedor %03d\tproducto %03d\n",ventas[i][j][k]);
            }
        }
    }
}
