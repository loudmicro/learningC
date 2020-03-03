/*
	Juan Victor 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int resultado();
/*programa que simula el lanzamiento de una moneda y nos devuelve la cantidad
de veces qu ha salido cara y cruz*/
int main(void) {
    srand(time(NULL));
    int i, cara = 0, cruz = 0;
    for (i = 0; i < 1000000; i++) {

        if (resultado() == 0) {/*llamamos a la funcion que randomiza el lanzamiento*/
            cara++;
            /*printf("cara\n");*/
        }else{
            cruz++;
            /*printf("cruz\n");*/
        }
    }
    printf("\n Cara ha salido %d veces, Cruz ha salido %d veces\n",cara, cruz);
    return 0;
}

int resultado(){
    return rand() % 2; /*nos da dos resultados 0=cara 1=cruz*/
}
