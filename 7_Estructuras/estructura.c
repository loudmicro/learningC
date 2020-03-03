/*
	Juan Victor 
*/

/*
las estructuras se declaran con struct

*/
/*persona es un nuevo tipo*/
struct persona{
    char nombre[50];
    char apellido[50];
    int anio_nac;
    double peso;
    double altura;
    char aficiones[2048];
};

/*El typedef define un tipo nuevo por ejemplo struct persona juan, podemos hacer persona_t juan*/

typedef struct persona persona_t;

/*tambien se puede hacer en la plantilla*/

typedef struct persona2{
    char nombre[50];
    char apellido[50];
    int anio_nac;
    double peso;
    double altura;
    char aficiones[2048];
}persona2_t;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprime_persona(struct persona p);
void imprime_persona_ref(struct persona *p);

int main(void) {



    /*el struct se pude hacer dentro tambien y declarar las variables ->*/

    struct punto{
        int x;
        int y;
    }a,b,c; 


    struct persona juan = {"Juan Victor", "Gonzalez",1984,80, 1.80,"cosas varias"};
    /*usamos el nuevo tipo con*/

    struct persona car;
    /*Escribimos en la estrucutra*/
    strcpy(car.nombre,"Carmen Maria");
    strcpy(car.apellido,"Falcon Ramirez");
    car.anio_nac = 1981;
    car.peso = 50;
    car.altura = 1.60;
    strcpy(car.aficiones, "dormir, comer, salir a caminar, pasear, ver la tele, los gatos, etc.... aqui cabe un monton de informacion");

    /*leemos los datos de la estructura*/
    /*
    printf("Nombre: %s, %s\n",car.apellido, car.nombre);
    printf("Año de naciemiento: %d\n",car.anio_nac);
    printf("[Altura: %.2f][Peso: %.2f]\n",car.altura, car.peso);
    printf("Aficiones: %s\n", car.aficiones);
    */
    /*podemos crear una funcion que imprima*/

    
    /*
    si pasamos la variable a la funcion x referencia es mucho mas efectivo y rapido
    */

    printf("imprime por valor:---->\n");
    imprime_persona(car);

    printf("\n\nimprime por referencia:------>\n");
    imprime_persona_ref(&car);


    printf("tamaño en bytes de struct.persona= %ld\n\n\n", sizeof(car));


    imprime_persona_ref(&juan);
    return 0;
}

void imprime_persona(struct persona p){

    printf("Nombre: %s, %s\n",p.apellido, p.nombre);
    printf("Año de naciemiento: %d\n",p.anio_nac);
    printf("[Altura: %.2f][Peso: %.2f]\n",p.altura, p.peso);
    printf("Aficiones: %s\n", p.aficiones);
}

void imprime_persona_ref(struct persona *p){

    printf("Nombre: %s, %s\n",(*p).apellido, p->nombre);/*diferentes formas de hacer lo mismo*/
    printf("Año de naciemiento: %d\n",p->anio_nac);
    printf("[Altura: %.2f][Peso: %.2f]\n",p->altura, p->peso);
    printf("Aficiones: %s\n", p->aficiones);
}