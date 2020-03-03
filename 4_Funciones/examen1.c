/*
	Juan Victor 
*/
#include <stdio.h>

/*prototipos dee funciones recursivas*/
int suma_n(int n);
int suma_npares(int n);
int suma_digitos( int n);
void print_pares(int n);
void print_rango(int i, int j);

int main(void) {

    int numero;
    int digitos;
    int ra,rb;
    /*
    printf("introduce la cantidad de numeros naturales que quieres sumar: \n");
    scanf("%d", &numero);
    printf("el resultado es: %d\n", suma_n(numero));
    printf("\nla suma de los numeros pares es: %d\n", suma_npares(numero));
    printf("-------\nintroduce un numero para sumar sus digitos independientes:\n");
    scanf("%d", &digitos);
    printf("el resultado es: %d \n", suma_digitos(digitos));
    */
    printf("introduce el primer numero:\n");
    scanf("%d", &ra);
    printf("introduce el sgundo numero:\n");
    scanf("%d", &rb);
    printf("el rango es: \n");
    print_rango(ra,rb);


    return 0;
}
/*suma lo numeros hasta n*/
int suma_n(int n){
    int suma = n;
    if (n == 0) {
        return suma;
    }else{
        return suma + suma_n(n-1);
    }
}
/*suma los numeros pares*/
int suma_npares(int n){
    int suma = n;
    if (n == 0) {
        return suma;
    }else if ( n % 2 == 0) {
        return suma + suma_npares(n-1); /*si es multiplo de 2 se acumula*/
    } else {
        return suma_npares(n-1); /*si no es multiplo pasa al siguiente*/
    }
}
int suma_digitos( int n){
    int acumulador;
    acumulador = n % 10; /*acumula el resultado*/
    if ( n <= 0 ) { /*caso base*/
        return acumulador;
    }else{
        return acumulador + suma_digitos (n/10); /*va quitando el ultimo decimal*/
    }
}
void print_pares(int n){
    if (n % 2 == 0) {
      printf("%d, ",n);
    }
    if (n  == 0) {
      return;
  }else{
      return print_pares(n-1);
  }

}
void print_rango(int i, int j){
    printf("%d, ",i);
    if (i == j) {
        return;
    }else
        return print_rango(i+1,j);
}
