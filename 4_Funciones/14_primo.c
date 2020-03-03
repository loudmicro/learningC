/*
	Juan Victor 
*/
#include <stdio.h>
#include <math.h>

int primo(int);
int primoRaiz(int);
void primo2(int entrada);

int main(void) {
    int numero =1;

    for (numero = 1; numero < 90000; numero++) {
        if(primo(numero)==2)
        printf("%d es primo\n", numero );
    }

    return 0;
}
/*
esta esta un poco retorcida, pero va sumando la cantidad de divisores de un numero
y si esa suma es 2, si es primo, si no lo es, es porque tiene mas divisores y NO es primo
 */
int primo(int entrada){
    int i, primo = 0;
    for( i = 1; i <= entrada; i++){
        if (entrada % i == 0) {
            primo++;
        }
    }
    return primo;
}
