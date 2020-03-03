/*
	Juan Victor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LARGO 100
#define TRUE 1
#define FALSE 0


void randomizearray(int n[], int t);
void printarray(int n[], int t);
void burbuja(int n[], int t);

int main(void) {
    int vector[LARGO];
    srand(time(NULL));
    randomizearray(vector, LARGO);
    burbuja(vector, LARGO);
    printarray(vector, LARGO);


    return 0;
}
void printarray(int n[], int t){
    int i;
    for (i= 0; i<t; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }

}
void randomizearray(int n[], int t){
    int i;
    for (i= 0; i<t; i++) {
        n[i]= rand()%100;
    }
}
void burbuja(int n[], int t){
    int i, j, aux;
    int intercambio;
    for (i= 0; i < t-1; i++) {

        intercambio = FALSE;
        for (j= 0 ; j < t-1 ; j++) {
            if (n[j] > n[j+1]) {
                aux = n[j];
                n[j] = n[j+1];
                n[j+1] = aux;
                intercambio = TRUE;
            }
        }

        if (!intercambio) {
            break;
        }
    }
}
