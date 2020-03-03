/*
	Juan Victor 
*/

#include <stdio.h>
#include <math.h>

#define INICIAR 1
#define LARGO 1000


void imprimmirArray(int primos[], int dimension);
void iniciarArray(int primos[], int dimension);
void comprobar(int primos[], int dimension);

int main(void)
{

    int primos[LARGO];

    iniciarArray(primos, LARGO);
    comprobar(primos, LARGO);
    imprimmirArray(primos, LARGO);


    return 0;
}

void imprimmirArray(int primos[], int dimension){
    int i;


    for (i = 0; i < dimension; ++i)
    {
        if (primos[i] == 1)
        {
            printf("%d\n",i);
        }
    }

}
void iniciarArray(int primos[], int dimension){

    int i;

    for (i = 0; i < dimension; ++i)
    {
        primos[i] = INICIAR;
    }

}
void comprobar(int primos[], int dimension){
    int i,j;

    for (i = 2; i < dimension; i++)
    {
        for (j = (i+1) ; j < dimension; j++)
        {
            if (j % i == 0)
            {
                primos[j]=0;
            }

        }
    }

}
