/*
	Juan Victor 
*/

#include <stdio.h>

#define RESERVADO 1
#define LIBRE 0
#define TRUE 1
#define FALSE 0


int menu(void);
int libre1clase(int asientos[]);
int libre2clase(int asientos[]);
/*devuelen el asiento que han reservado*/
void reservar1clase(int asientos[], int numero);
void reservar2clase(int asientos[], int numero);
void print_billete(int n);

int main(void) {
    int asientos[10] ={LIBRE, LIBRE, LIBRE, LIBRE, LIBRE, LIBRE, LIBRE, LIBRE, LIBRE, LIBRE, };
    int opcion, asiento_reservado;
    char respuesta, caca;

    printf("Bienvenido a aerolineas DAM\n");

    do {
        printf("Desea comprobar si hay disponibilidad en primera clase? (s/n)(x para terminar): ");
        scanf("%c%c",&respuesta, &caca );
        if (respuesta == 's')
        {
            asiento_reservado = libre1clase(asientos);
            print_billete(asiento_reservado);
        }else if(respuesta == 'n'){
            printf("Desea comprobar si hay disponibilidad en segunda clase? (s/n): ");
            scanf("%c%c",&respuesta, &caca );
            if (respuesta == 's') {
                asiento_reservado = libre2clase(asientos);
                /*llamamos imprimir billete*/
                print_billete(asiento_reservado);
            }else{
                printf("Hasta luego cocodrilo\n");
            }

        }
    } while(respuesta != 'x');


    return 0;
}

int menu(void){

}


int libre1clase(int asientos[]){
    int i;
    char respuesta, caca;
    for (i = 0; i < 5; ++i)
    {
        if (asientos[i]==0)
        {
            printf("El asiento %d esta libre, desea reservarlo?(s/n): ", i+1);
            fflush(stdin);
            scanf("%c%c",&respuesta,&caca );
            if (respuesta = 's')
            {
                reservar1clase(asientos,i);
                break;
            }

        }
    }
    return i;
}
int libre2clase(int asientos[]){
    int i;
    char respuesta;
    for (i = 5; i < 10; ++i)
    {
        if (asientos[i])
        {
            printf("El asiento %d esta libre, desea reservarlo?(s/n): ", i+1);
            scanf("%c\n",&respuesta );
            if (respuesta = 's')
            {
                reservar2clase(asientos,i);
                break;
            }
        }
    }
    return i;
}
/*devuelen el asiento que han reservado*/
void reservar1clase(int asientos[], int numero){
    asientos[numero]= RESERVADO;
    printf("Asiento reservado\n");
}
void reservar2clase(int asientos[], int numero){
    asientos[numero]= RESERVADO;
    printf("Asiento reservado\n");
}
void print_billete(int n){
    printf("Ha realizado usted correctamente la reserva:\n");
    printf("asiento: %d en ",n+1 );
    if (n<5)
    {
        printf("Primera clase\n");
    }else{
        printf("Segunda clase\n");
    }

}
