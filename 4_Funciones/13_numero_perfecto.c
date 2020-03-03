/*
	Juan Victor 
*/
#include <stdio.h>

int perfecto(int);

int main(void) {
    int numero =1;

    for (numero = 1; numero < 1000000; numero++) {
        if(perfecto(numero)==1)
        /* llamamos a la funcion perfecto en cada iteracion para comprobar si es perfecto */
        printf("%d es perfecto\n", numero );
    }
    return 0;
}
int perfecto(int entrada){
    int i, perfecto = 0;
    /*esta iteracion suma todos los numeros anteriores al de entrada*/
    for( i = 1; i < entrada; i++){
        if (entrada % i == 0) {
            perfecto +=  i;
        }
    }
    /*si la suma anterior coincide con la entrada es que es perfecto y retorna 1*/
    if (perfecto == entrada) {
        return 1;
    }else
        return 0;
}
