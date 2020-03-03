/*
	Juan Victor 
*/

#include <stdio.h>

int es_par (int n);
int compuesto(int n);
int es_perfecto(int n);

int main(void) {
    int valor, par=0, compu=0, perfe=0, veces=0;

    do {
        printf("propiedades del numero: (-1 para finalizar): ");
        scanf("%d", &valor);
        /*si es par...*/
        if (es_par(valor) == 1 ) {
            printf("Es par\n");
            par++;
        }else{
            printf("No es par\n");
        }
        /*si es compuesto*/
        if (compuesto(valor) > 0 ) {
            printf("Es compuesto\n");
            compu++;
        }else{
            printf("No es compuesto\n");
        }
        /*si es perfecto...*/
        if (es_perfecto(valor) == 1) {
            printf("Es perfecto\n");
            perfe++;
        }else{
            printf("No es perfecto\n");
        }

        veces++;
    } while(valor != -1);
    printf("\n---------Resumen-----------\n");
    printf("Has comprobado %d numeros\n", veces);
    printf("Pares: %d \nImpares: %d\n", par, veces-par);
    printf("Primos: %d \nCompuestos: %d\n",veces-compu, compu);
    printf("Perfectos: %d \nNo Perfectos: %d\n",perfe, veces-perfe);
    printf("bye....\n");

    return 0;
}

int es_par (int n){
    if ( n % 2 == 0) {
        return 1;
    }else{
        return 0;
    }
}
int compuesto(int n){

    int i, primo = 0;
    for( i = 2; i < n; i++){
        if (n % i == 0) {
            primo++;
        }
    }
    return primo;

}

int es_perfecto(int n){
    int i, acu = 0, divisor;

    for (i= 1; i < n; i++) {
        if (n % i == 0 ) {
            acu += i;
        }
    }
    if (acu == n) {
        return 1;
    }else{
        return 0;
    }
}
