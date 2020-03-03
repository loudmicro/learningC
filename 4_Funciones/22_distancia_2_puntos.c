/*
	Juan Victor 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double distancia(double x1, double y1, double x2, double y2);

int main(void) {
    /* pide las 2 coordenadas*/
    double x1, y1, x2, y2;
    printf("introduce la primera coordenada (x,y)\n");
    scanf("(%lf,%lf)", &x1, &y1);
    fflush(stdin);/*vaciamos el buffer*/
    printf("introduce la segunda coordenada (x,y)\n");
    scanf("(%lf,%lf)", &x2, &y2);
    /*llamamos a la funcion distancia para calcular el resultado*/
    printf("la distancia entre los dos puntos es %lf", distancia(x1, y1, x2, y2));

    return 0;
}

double distancia(double x1, double y1, double x2, double y2){
    double distancia;
    distancia = sqrt( pow(x2-x1,2) + pow(y2-y1,2) ); /* la funcion de distancia entre 2 puntos cartesianos*/
    return distancia;
}
