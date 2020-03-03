/*
	Juan Victor 
*/
#include "stdio.h"

float far2cel(float farenheit);
float cel2far(float celsius);
 /*programa que pasa de ºC a ºF y viceversa*/
int main(void) {

    float celsius, farenheit;
    printf("Paso de celsius a Farenheit: \n");
    for (celsius = 00; celsius <= 100; celsius++) {
        printf("%02.2fºC -> %02.2fºF\n", celsius, cel2far(celsius));
    }
    printf("\n\n\n Paso de Farenheit a celsius");
    for (farenheit = 00; farenheit <= 100; farenheit++) {
        printf("%02.2fºF -> %02.2fºC\n", farenheit, far2cel(farenheit));
    }

    return 0;
}
/*pasamos de farenheit a celsius*/
float far2cel(float farenheit){
    float celsius;
    celsius = (farenheit - 32) / 1.8;
    return celsius;
}
/*pasamos de celsius a farenheit*/
float cel2far(float celsius){
    float farenheit;
    farenheit = (celsius*1.8)+32;
    return farenheit;
}
