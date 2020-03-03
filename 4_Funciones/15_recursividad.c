/*
	Juan Victor 
*/
#include <stdio.h>

void cabezaAbajo(int);
/*devuelve el numero en orden invertido*/
int main(void) {
    int numero;
    printf("Introduce un número\n");
    scanf("%d", &numero);
    cabezaAbajo(numero);
    return 0;
}
/*funcion recursiva que va calculando entrada % 10 para imprimir el ultimo numero
y luego /10 para reducirse a si misma hasta el caso base*/
void cabezaAbajo(int numero){
    printf("%d", numero % 10 );
    if (numero < 10) {
        return;
    }else{
        cabezaAbajo(numero / 10);
        printf("\n");
        return;
    }
}
