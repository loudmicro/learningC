/*
gcc -Wall -O2 -o717 717.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void limpiar(void);
int rand10(void);
int movimientoTortu(int *tortu);
int movimientoLiebre(int *liebre);
void iniciarCamino(char camino[], int tam);
void imprimir_camino(char camino[], int largo);
void dormir( int segundos);
void vuelta(int *tortu, int *liebre, char camino[]);

int main(void)
{

	int tortuga = 1, liebre = 1, i = 1;
	char camino[69];


	srand(time(NULL));

	limpiar();

	printf("Bienvenidos al juego de la tortuga y la liebre\n");
	printf("en breve comienza la carrera, vamos a perparar el terreno\n");
	printf("intro para continuar\n");
	getchar();
	limpiar();
	printf("Que comience la carrera!!!!\n");
	dormir(1);
	printf("Preparados...." );
	dormir(2);
	printf("listos.....\n" );
	dormir(2);
	printf("BANG!!!\nARRANCA LA CARRERA!!!!!!!!!!!!!\n");
	dormir(2);
	do{

	limpiar();
	iniciarCamino(camino,69);
	vuelta(&tortuga, &liebre, camino);
	printf("vuelta = %d\nTortuga = %d\nLiebre = %d\n\n", i, tortuga, liebre);
	imprimir_camino(camino,69);
	dormir(1);
	i++;
	}while (liebre != 69 && tortuga != 69);

	if (camino[69] == 'T') {
		printf("el ganador ha sido LA TORTUGA!!!!\n");
	}else
		printf("el ganador ha sido LA LIEBRE!!!!\n");


	return 0;
}

void limpiar(void){
	int i;
	for ( i = 0; i < 100; i++)
	{
		printf("\n");
	}

}

int rand10(void){
	return (rand()%10)+1;
}

void iniciarCamino(char camino[], int tam){
	int i;
	for ( i = 0; i < tam; i++)
	{
		camino[i] = '-';
	}

}

void dormir( int segundos){
	int milisegundos = segundos * 1000;

	clock_t inicio_reloj = clock();
	while (clock() < inicio_reloj + milisegundos) {

	}

}

int movimientoTortu(int *tortu){
		switch (rand10()) {
			case 1:
			case 2:
			case 3:
			case 4:
			case 5: *tortu +=3; break;
			case 6:
			case 7: *tortu +=6; break;
			case 8:
			case 9:
			case 10: *tortu += 1; break;
		}

		if (*tortu < 1) {
			*tortu =1;
		}
		if (*tortu > 69) {
			*tortu = 69;
		}

		return *tortu;
}

int movimientoLiebre(int *liebre){
	switch (rand10()) {
		case 1:
		case 2:
		case 3:
		case 4: *liebre += 9; break;
		case 5: *liebre -= 12; break;
		case 6:
		case 7:
		case 8: *liebre += 1; break;
		case 9:
		case 10: *liebre -= 2; break;
	}

	if (*liebre < 1) {
		*liebre = 1;
	}
	if (*liebre > 69) {
		*liebre = 69;
	}


	return *liebre;
}

void imprimir_camino(char camino[], int largo){
	int i;
	for (i = 0; i < largo; i++) {
		printf("%c", camino[i] );

	}
}

void vuelta(int *tortu, int *liebre, char camino[]){

	movimientoTortu(tortu);
	movimientoLiebre(liebre);
	camino[*tortu] = 'T';
	camino[*liebre] = 'L';

}
