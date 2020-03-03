
/*
	Juan Victor 
*/

/*
Agenda Version 0.2
utiliza un array de estructuras

para no linkar con las librerias es:

gcc -Wall -c main.c

despues para enlazarlo con el otro archivo usamos el gcc tambien

gcc -Wall -o agenda2000 main.o libagenda.o

*/



#include <stdio.h>
#include <string.h>
#include "libagenda.h"
#include <unistd.h>
#define TIME 3

int main(void)
{
	char *lista_contactos = "datos.dat";
	persona_t persona;
	int opcion;
	int posicion;
	char algo,rc;



	/*Ciclo de Funcionamiento*/
	while(opcion != 7){
		/*imprime menu y lee opcion*/
		opcion = print_menu();

		switch(opcion){
			case 1:
				
				printf("Apellidos: ");
				fgets(persona.apellidos,TAM_APP,stdin);
				printf("\nNombre: ");
				fgets(persona.nombre,TAM_NOM,stdin);
				printf("\nTelefono: ");
				scanf("%ld",&persona.telefono);
				insertar_contacto(lista_contactos, persona);
				break;

				/*
				recoger_datos(&persona);

				if (insertar_contacto(lista_contactos, persona)) {
					printf("Contacto añadido correctamente\n");
				}else
					printf("Error al añadir contacto\n");
				sleep(TIME);
				break;
				*/
			case 2: /*Eliminar*/
					/*int eliminar_contacto(persona_t lista[], persona_t contacto);*/
					/*Deberia eliminar con el numero de contacto no con los datos<----------------------------------*/
					printf("Apellidos: ");
					fgets(persona.apellidos,TAM_APP,stdin);
					printf("\nNombre: ");
					fgets(persona.nombre,TAM_NOM,stdin);
					printf("\nTelefono: ");
					scanf("%ld",&persona.telefono);

					if (eliminar_contacto(lista_contactos, persona)) {
						printf("Contacto eliminado correctamente\n");
					}else
						printf("Error al eliminar contacto\n");
					sleep(TIME);
					break;
				sleep(TIME);
				break;
			case 3: /*Buscar*/
					/*int buscar_contacto(persona_t lista[], persona_t contacto)*/
					//printf("Apellidos: ");
					//fgets(persona.apellidos,TAM_APP,stdin);
					//printf("\nNombre: ");
					//fgets(persona.nombre,TAM_NOM,stdin);

					/*
					recoger_datos_sin_tel(&persona);
					posicion = buscar_contacto(lista_contactos, persona);
					if (posicion == -1) {
						printf("el contacto no existe\n");
					}else
						printf("El contacto existe en la posicion %d\n", posicion);
				sleep(TIME);
				break;

				*/
			case 4: /*Imprimir*/
				printf("Numero de orden del contacto\n");
				scanf("%d%c\n",&opcion,&rc);
				if (!printf_contacto(lista_contactos,opcion)) { /* es lo mismo que printf_contacto(lista_contactos,opcion) == FALSE*/
					/* code */
				}
				sleep(TIME);
				break;
			case 5: /*Listar*/
				printf("\nListado Completo:\n");
				printf_agenda(lista_contactos);
				printf("\nPulse algo para continuar\n");
				//scanf("%c%c",&algo,&rc);
				presskey();
				break;
			case 6: /*nro contactos*/
				printf("Numero de Contactos es: %d\n",numero_contactos(lista_contactos) );
				sleep(TIME);
				break;
			case 7: /* Salir*/
				printf("Bye.....\n");
		}
		fflush(stdin);
	}




	return 0;
}
