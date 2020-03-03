/*
	Juan Victor 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int resultado(int, int);

int main(void) {
    int mul1, mul2, resul;
    srand(time(NULL));
    /*genera dos numeros aleatorios de 2 cifras*/
    mul1 = rand() % 100;
    mul2 = rand() % 100;
    printf("¿Cuanto es %d x %d? \n", mul1, mul2);
    /* pregunta cuanto es el resultado de la multiplicacion de los dos numeros*/
    do {
        scanf("%d", &resul);
        /*llama a la funcion resultado y la compara con el introducido*/
        if (resultado (mul1, mul2)==resul) {
            printf("¡Muy bien!\n");
        }else{
            printf("Has fallado, intentalo de nuevo.\n");
        }
    } while(resultado (mul1, mul2)!=resul);

    return 0;
}

int resultado(int a, int b){
    return a * b;
}
