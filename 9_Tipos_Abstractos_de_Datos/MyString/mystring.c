//
// Created by Juanu on 15/02/2020.
//

#include "mystring.h"
#include <stdio.h>
#include <stdlib.h>

mystring_t *crear(void){
    return NULL;
}
mystring_t *crear_con_contenido( char *cad){

    mystring_t **nuevo;
    *nuevo = crear();
    int i;


    for(i = 0;cad[i] != '\0'; i++ ){
        insertar(nuevo, cad[i]);
    }
    return *nuevo;

}

int es_vacia(mystring_t *c){
    return (c == NULL);
}
int mystrlen(mystring_t *str){
    mystring_t *auxiliar = str;
    int i;

    for ( i = 0; auxiliar != NULL ; i++)
    {
        auxiliar = auxiliar->sig;
    }

    return i;
}
void *mystrcat(mystring_t **dest, mystring_t *src){ /* devuelve */

    mystring_t *aux = src;

    while (aux != NULL){
        insertar(dest,aux->letra);
        aux = aux->sig;
    }


}

void *mystrncat(mystring_t **dest, mystring_t *src, int n){ /*devuelve 1 se es correcta*/
    mystring_t *aux = src;
    int i = 0;

    while (aux != NULL && i < n){
        insertar(dest,aux->letra);
        aux = aux->sig;
        i++;
    }



}

bool_t insertar(nodo_t **c, char n){ /**/
    mystring_t *nuevo;
    nodo_t *aux = *c;

    nuevo = (mystring_t *) malloc(sizeof(mystring_t));

    if (nuevo == NULL){
        return FALSE;
    }

    nuevo->letra = n;
    nuevo->sig = NULL;

    if(es_vacia(*c)){
        *c = nuevo;
    }else{
        while(aux->sig != NULL){
            aux= aux->sig;
        }
        aux->sig = nuevo;
        return TRUE;
    }

}



mystring_t *mystrchr(mystring_t *str, char c){ /* devuelve un puntero al nodo donde esta char o NULL si no lo encuentra */

    mystring_t *aux = str;

    for (; aux != NULL; aux=aux->sig)
    {
        aux = aux->sig;
        if (aux->letra == c)
        {
            return aux;
        }
    }
    return NULL;

}



int mystrcmp(mystring_t *str1, mystring_t *str2){ /*compara nodo a nodo devuelve 0 si son iguales, -1 si str1 es menor que str2 y 1 se str1 es mayor que str2*/
    mystring_t *aux1 = str1;
    mystring_t *aux2 = str2;


    while(aux1 != NULL && aux2 != NULL){

        if(aux1->letra == aux2->letra){
            aux1= aux1->sig;
            aux2= aux2->sig;
        }else if (aux1->letra > aux2->letra)
        {
            return 1;/*str1 es mayor*/
        }else
        {
            return -1; /*str1 es menor*/
        }


    }
    return 0;
}

mystring_t *mystrcpy(mystring_t **dest, mystring_t *src){
    mystring_t *aux1 = *dest;
    mystring_t *aux2 = src;

    mystring_t *destructor;
    mystring_t *victima;

    while (aux2->sig != NULL)
    {
        aux1->letra = aux2->letra;
        aux1 = aux1->sig;
        aux2 = aux2->sig;
    }
    destructor = aux1->sig;
    aux1->sig= NULL;
    while (destructor != NULL){
        victima = destructor;
        destructor = destructor->sig;
        free(victima);
    }

    return *dest;


}

mystring_t *mystrncpy(mystring_t **dest, mystring_t *src, int n){
    mystring_t *aux1 = *dest;
    mystring_t *aux2 = src;
    int i = 0;

    mystring_t *destructor;
    mystring_t *victima;

    while (aux2->sig != NULL && i < n)
    {
        aux1->letra = aux2->letra;
        aux1 = aux1->sig;
        aux2 = aux2->sig;
        i++;
    }
    destructor = aux1->sig;
    aux1->sig= NULL;
    while (destructor != NULL){
        victima = destructor;
        destructor = destructor->sig;
        free(victima);
    }

    return *dest;
}
bool_t mystrsub(mystring_t *str1, mystring_t *str2){ /*retorna true si ha encontrado sub2 dentro de sub1*/
    mystring_t *aux1 = str1;
    mystring_t *aux2 = str2;
    mystring_t *aux3;
    bool_t resul = FALSE;


    while(aux1 != NULL){
        while(aux2 != NULL){
            aux3 = aux2;
            if(aux1->letra == aux3->letra){
                resul = TRUE;
            }else{
                resul = FALSE;
            }

            aux3 = aux3->sig;
        }
        aux1 = aux1->sig;
        aux2 = aux2->sig;
    }

    return resul;

}
void mydelete(mystring_t **c){
    mystring_t *destructor = *c;
    mystring_t *victima;

    while (destructor != NULL){
        victima = destructor;
        destructor = destructor->sig;
        free(victima);
    }

}
void myprintf(mystring_t *c){
    mystring_t *aux = c;


    while(aux != NULL){
        printf("%c",aux->letra);
        aux = aux->sig;
    }


}

