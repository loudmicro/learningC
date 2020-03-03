/*
	Juan Victor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tirarDado();
int sumaValores(int a, int b);
void imprimirArray(int array[], int largo);

int main(void) {

    int i;
    int veces[11]={0};
    srand(time(NULL));
    /*36000 veces debe tirar el dado*/

    for (i = 0; i < 36000; i++) {

        switch (sumaValores(tirarDado(),tirarDado())){
            case 2:
            veces[0]++; break;
            case 3:
            veces[1]++; break;
            case 4:
            veces[2]++; break;
            case 5:
            veces[3]++; break;
            case 6:
            veces[4]++; break;
            case 7:
            veces[5]++; break;
            case 8:
            veces[6]++; break;
            case 9:
            veces[7]++; break;
            case 10:
            veces[8]++; break;
            case 11:
            veces[9]++; break;
            case 12:
            veces[10]++; break;

        }
    }
    imprimirArray(veces,11);
    return 0;
}

int tirarDado(){
    return rand()%6+1;
}
int sumaValores(int a, int b){
    return a+b;
}
void imprimirArray(int array[], int largo){
    int i;
    for (i = 0; i < largo; i++) {
        printf("veces[%d]\t=\t%03d\n",i, array[i]);
    }
}
