/*
	Juan Victor 
*/
#define DOCEHORAS 43200 /*cantidad de segundos en 12h*/
#include "stdio.h"

int segundosDesdeLas12(int horas, int minutos, int segundos);

int main(void) {
    int horas, minutos, segundos;
    printf("introduce las horas, minutos y segundos (hh:mm:ss)\n");
    scanf("(%d:%d:%d)", &horas, &minutos, &segundos);
    /*pedimos los datos de hh:mm:ss y los pasamos a la funcion*/
    printf("%d segundos pasaron desde que la que el reloj marco las 12\n", segundosDesdeLas12(horas, minutos, segundos) );
    return 0;
}

int segundosDesdeLas12(int horas, int minutos, int segundos){
    if (horas > 12) {
        horas = horas - 12;/* si las horas son > 12 que le reste doce para pasar a formato AM PM*/
    }
    segundos = segundos + horas * 60 * 60 + minutos * 60; /* pasamos todos los datos a segundos*/
    return DOCEHORAS - segundos; /*resta la cantidad de segundos al total*/
}
