/*
	Juan Victor 
*/
#include <stdio.h>
#include <stdlib.h>

int menu(void);

void inicializar(int m[][6], int filas, int cols);
void insertarVenta(int n[][6]);
void consultarEmpleado(int n[][6],int empleado, int mes);
void consultarMes(int n[][6],int empleado, int mes);
void cuadrante(int n[][6],int empleado, int mes);


int main(void) {

    int ventas[5][6];
    int opcion;
    inicializar(ventas, 5, 6);
    printf("\n-Fitipaldi S.A.-\n");

    do {
        opcion=menu();
        switch (opcion) {
            case 1:
                insertarVenta(ventas);
                break;
            case 2:
                consultarEmpleado(ventas,5,6);
                break;
            case 3:
                consultarMes(ventas,5,6);
                break;
            case 4:
                cuadrante(ventas,5,6);
                break;
        }
        fflush(stdin);
    } while(opcion != 5);


    return 0;
}

int menu(void){
    int opcion;
    printf("\n---------\n  MENU\n---------\n");
    printf("1. Insertar venta.\n");
    printf("2. Consultar ventas del empleado.\n");
    printf("3. Consultar venta del mes.\n");
    printf("4. Mostrar Cuadrante.\n");
    printf("5. Salir.\n");
    printf("introduce la opcion\n");

    do {
        scanf("%d", &opcion);
        if (opcion < 1 || opcion >5) {
            printf("Opcion fuera de rango.\n");
        }
    } while(opcion < 1 || opcion >5);

    return opcion;
}

void insertarVenta(int n[][6]){
    int vendedor, mes,  cantidad;
    printf("De que vendedor quiere insertar las ventas?(1-5)\n");
    scanf("%d", &vendedor);
    printf("En que mes estamos guardando la venta(1-6)\n");
    scanf("%d", &mes);
    printf("Cuantos vehiculos ha vendido el vendedor %d en el mes %d?\n",vendedor, mes);
    scanf("%d", &cantidad);

    n[vendedor-1][mes-1] += cantidad;
    printf("\n---------------\nRegistro guardado\n---------------\n");
    printf("El empleado %d lleva un total de %d vehiculos vendidos en el mes %d\n",vendedor, n[vendedor-1][mes-1], mes );

}
void consultarEmpleado(int n[][6],int empleado, int mes){
    int opcion, i,j, suma = 0;
    printf("De que vendedor quiere consultar las ventas?(1-5)\n");
    scanf("%d", &opcion);

	for (i = 0; i < empleado; i++)	{
		for (j = 0; j < mes; j++)		{
			if (i+1 == opcion) {
				suma += n[i][j];
			}
		}
	}
    printf("--------->Las ventas totales del empleado son: %d \n",suma );

}

void consultarMes(int n[][6],int empleado, int mes){
    int opcion, i,j, suma = 0;
    printf("De que Mes quiere consultar las ventas?(1-5)\n");
    scanf("%d", &opcion);

    for (i = 0; i < empleado; i++)	{
        for (j = 0; j < mes; j++)		{
            if (j+1 == opcion) {
                suma += n[i][j];
            }
        }
    }
    printf("\t--------->Las ventas totales del mes son: %d \n\n",suma );
}

void cuadrante(int n[][6],int empleado, int mes){
    int i,j;
    printf("el cuadrante de ventas del semstre es: \n");
    printf("Mes\t\t\t-1-\t-2-\t-3-\t-4-\t-5-\t-6-\t\n");
    for (i = 0; i < empleado; i++) {
        printf("Empleado %d\t", i+1);
        for (j = 0; j < mes; j++) {
            printf("\t%03d",n[i][j] );

        }
        printf("\n");
    }

    printf("\n-------------\nFIN DEL CUADRANTE\n-------------\n\n");
}

void inicializar(int m[][6], int filas, int cols){
	int i, j;
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < cols; j++)
		{
			m[i][j]= 0;
		}
	}

}
