/*
	Juan Victor 
*/


#define TRUE 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void separador(void);

int main(void){

    int dia, mes, anio;

    printf("Introduce una fecha en formato (dd/mm/aaaa)\n");
    scanf("%d/%d/%d",&dia,&mes,&anio);
    imprimir_fecha_en_letras(dia,mes,anio);


return 0;

}

void imprimir_fecha_en_letras(int d, int m, int a){

    char meses[12][20];

    strcpy(meses[0],"enero");
    strcpy(meses[1],"febrero");
    strcpy(meses[2],"marzo");
    strcpy(meses[3],"abril");
    strcpy(meses[4],"mayo");
    strcpy(meses[5],"junio");
    strcpy(meses[6],"julio");
    strcpy(meses[7],"agosto");
    strcpy(meses[8],"septiembre");
    strcpy(meses[9],"octubre");
    strcpy(meses[10],"noviembre");
    strcpy(meses[11],"diciembre");

    printf("\nLa Fecha en el formato cambiado es:\n");

    separador();

    printf("\t%d de %s del %d",d, meses[m-1],a );

    separador();

}

void separador(void){
	int i;
	printf("\n\n");
	for ( i = 0; i < 26; ++i)
	{
		printf("-*");
	}
	printf("\n\n");
}
