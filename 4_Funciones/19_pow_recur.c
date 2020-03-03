/*
	Juan Victor 
*/
#include <stdio.h>

int potenciaInt (int base, int exponente);

int main(void)
{
	int base,exponente;
	/*pedimos la base y el exponente*/
	printf("Introduce la base \n");
	scanf("%d",&base);
	printf("Introduce el exponente \n");
	scanf("%d",&exponente);
	/*llamamos a la funcion para darnos el resultado*/
	printf("el resultado de %d elevado a %d  es: %d",base, exponente, potenciaInt(base,exponente));
	return 0;
}
/*
funcion recursiva que calcula la potencia, el caso base es que exponente sea 1
y el caso recursivo es que se multiplicque a si mismo hasta que exponente sea 1
*/
int potenciaInt (int base, int exponente){
	int num = base;
    num = num * base;
    if (1 == exponente) {
        return num;
    }else{
        return potenciaInt(base, exponente-1);

    }
}
