/*
	Juan Victor 
*/
#include <stdio.h>
int mcd(int,int);
/*pide los datos para calcular el MCD e imprimir su resultado*/
int main(void) {
    int numero1, numero2;
    printf("Introduce dos numeros (x,y)\n");
    scanf("(%d,%d)", &numero1, &numero2);
    printf("el maximo comun divisor es: %d\n", mcd(numero1,numero2) );
    return 0;
}
/*funcion que aplica el algoritmo de euclides*/
int mcd(int a,int b){
    if (b == 0) {
        return a;
    }else{
        return mcd(b , a%b);
    }


}
