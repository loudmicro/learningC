/*
	Juan Victor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(int t[][8], int filas, int columnas);
void print_matriz(int t[][8], int filas, int columnas);
void inicializa_rnd(int t[][8], int filas, int columnas);
void suma_matriz(const int ma[][8],const int mb[][8],int mc[][8], int f, int c);

void get_fila(const int m[][8], int f, int c,  int fila[], int n);
void print_array(int fila[], int t);
void get_columna(const int m[][8], int f, int c, int columuna[], int n);


int main (void){
    srand(time(NULL));
    int tablero[8][8];
    int a[8][8];
    int b[8][8];
    int c[8][8];
    int fila[8];
    int colum[8];
    int n;


    inicializa_rnd(a, 8, 8);
    print_matriz(a,8,8);
    printf("\n------------\n");
    inicializa_rnd(b, 8, 8);
    print_matriz(b,8,8);
    printf("\n------------\n");
    suma_matriz(a,b,c,8,8);
    print_matriz(c,8,8);
    printf("que fila quieres guardar?\n");
    scanf("%d", &n);
    get_fila(c,8,8,fila,n);
    print_array(fila,8);
    printf("que columna quieres guardar?\n");
    scanf("%d", &n);
    get_fila(c,8,8,colum,n);
    print_array(colum,8);

    return 0;
}
void inicializa(int t[][8], int filas, int columnas){
    int i, j;

    for (i= 0; i < filas; i++) {

        for (j= 0; j < columnas; j++) {
            t[i][j]=0;
        }
    }
}
void print_matriz(int t[][8], int filas, int columnas){
    int i, j;

    for (i= 0; i < filas; i++) {

        for (j= 0; j<columnas; j++) {
            printf(" %03d ", t[i][j]);
        }
        printf("\n");
    }
}
void inicializa_rnd(int t[][8], int filas, int columnas){
    int i, j;

    for (i= 0; i < filas; i++) {

        for (j= 0; j < columnas; j++) {
            t[i][j] = rand() % 100;
        }
    }
}

void suma_matriz(const int ma[][8],const int mb[][8],int mc[][8], int filas, int columnas){
    int i, j;

    for (i= 0; i < filas; i++) {

        for (j= 0; j<columnas; j++) {
            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }
}

void print_array(int fila[], int t){
    int i;
    for (i= 0; i < t; i++) {
        printf(" %03d ", fila[i]);
    }
    printf("\n");
}

void get_fila(const int m[][8], int f, int c,  int fila[], int n){
    int i, j;
    for (i= 0; i < f; i++) {

        for (j= 0; j<c; j++) {
            fila[i]= m[i][n];
        }
    }
}

void get_columna(const int m[][8], int f, int c, int columuna[], int n){
    int i, j;
    for (i= 0; i < f; i++) {

        for (j= 0; j<c; j++) {
            columuna[i]= m[n][j];
        }
    }
}
