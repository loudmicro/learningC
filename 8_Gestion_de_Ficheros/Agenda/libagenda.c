/*
	Juan Victor 
*/

/*

gcc -Wall -c libagenda.c

*/

#include <string.h>
#include "libagenda.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int comparar_contactos(persona_t contacto1, persona_t contacto2);


void printf_agenda(char *file){

	FILE *fd;
	persona_t persona;
	int i = 1;

	fd = fopen(file, "rb");

	if (fd != NULL)
	{
		while( !feof(fd) ){
				fread(&persona, sizeof(persona_t),1,fd);
				printf("\nContacto %d:\n", i);
				printf("\tNombre: %s",persona.nombre);
				printf("\tApellidos: %s",persona.apellidos);
				printf("\tTelefono: %ld\n",persona.telefono);
				i++;
		}
		fclose(fd);
		
	}

	

}

int printf_contacto(char *file, int pos){
		/*Imprime el contacto de orden pos
		Retorna TRUE si existe
		Retorna FALSE si no existe
		*/
 	FILE *fd;
	persona_t persona;
	
	if (pos > numero_contactos(file))
	{
		return FALSE;
	}

	fd = fopen(file, "rb");

	if (fd != NULL)
	{

		/*coloca el cursor en la posicion pos*/

		fseek( fd,sizeof(persona_t)*pos,SEEK_SET );

		/*lee el contacto en la posicion que lo dejamos*/
		fread(&persona, sizeof(persona_t),1,fd);
		printf("\nContacto %d:\n", pos);
		printf("\tNombre: %s",persona.nombre);
		printf("\tApellidos: %s",persona.apellidos);
		printf("\tTelefono: %ld\n",persona.telefono);
		
		fclose(fd);
		
	}

	return TRUE;

}

int insertar_contacto(char *file, persona_t nuevo){ /*actualizada*/
/*inserta elemento, y retorna TRUE si ok, o FALSE si mal*/
 	FILE *fd;
 	int ok = FALSE;
 /*abre fichero para escritura al final*/

	 fd = fopen(file,"ab");

 	if (fd != NULL){

		if ( fwrite(&nuevo, sizeof(nuevo), 1, fd) ){

	 		ok = TRUE;	
	 		fclose(fd);
 		}
 	}
 	
 	return ok;	


}

int buscar_contacto(char *file, persona_t contacto){
	/* busca un contacto y retorna (0,TAM) si existe, y -1 si no existe*/

	FILE *fd;
	int valor = -1;
	int encontrado = FALSE;
	int posicion = 0;

	persona_t persona_temporal;

	fd = fopen (file, "rb");

	if (fd != NULL){
		/*abierto ok*/
		/*Leemos los contactos*/

		while( !feof(fd) && !encontrado ){ /* feof encuentra el fin de fichero */
			fread(&persona_temporal, sizeof(persona_t),1,fd);
			posicion++;
			/*comparar contactos*/
			if (comparar_contactos(contacto,persona_temporal))
			{
				encontrado = TRUE;
				valor = posicion;	
			}

		}
		fclose(fd);

	}


	return valor;

}

int eliminar_contacto(char *file, persona_t contacto){
	persona_t auxiliar;
	persona_t persona;
	FILE *fd;
	int posicion;
	int cantidad;
	int i = 0;
	int eliminado = FALSE;

	fd = fopen (file, "ab");
	posicion = buscar_contacto(fd,contacto);/* aqui no se si pasarle fd o file*/
	cantidad = numero_contactos(fd);

	if (posicion == 0)
	{
		return -404;/* contacto no encontrado*/
	} else if (fd != NULL)
	{
		while (cantidad <= posicion)
		{
			fseek( fd,sizeof(persona_t)*(cantidad),SEEK_SET );
			fwrite(&persona, sizeof(persona_t), 1, fd);
			fseek( fd,sizeof(persona_t)*(cantidad-1),SEEK_SET );

			cantidad--;
		}
		
	}
	/* fseek( fd,sizeof(persona_t)*pos,SEEK_SET ); */




	return 0;



}

int numero_contactos(char *file){
	/*
		Retrna un entero que es igual el numero de contactos
	*/
	int contactos = 0;
	FILE *fd;
	persona_t persona;

	fd = fopen(file, "rb");

	if (fd != NULL)
	{
		while(!feof(fd)){
			fread(&persona, sizeof(persona_t), 1, fd);
			contactos++;
		}
		fclose(fd);
	}



	return contactos;

}

int es_vacia(char *file){
	/*
		Retorna TRUE si el numero de contactos es 0, y FALSE >0
	*/

	FILE *fd;
	persona_t persona;
	int valor = FALSE;

	fd = fopen(file,"rb");

	if (fd != NULL)
	{
		if (!fread(&persona, sizeof(persona_t),1,fd))
		{
			valor = TRUE;
		}

		fclose(fd);
	}



	return valor;;

}



int print_menu(void){
	int opcion;
	char rc;

	system("clear");
	printf("AGENDA 2000 V0.02\n");
	printf("1. Añadir\n");
	printf("2. Eliminar\n");
	printf("3. Buscar\n");
	printf("4. Imprimir\n");
	printf("5. Listar\n");
	printf("6. Numero de contactos\n");
	printf("7. Salir\n");
	printf(">>\n");

	do scanf("%d%c",&opcion,&rc); while(opcion < 1 || opcion > 7);

	return opcion;
}
/*
void recoger_datos(persona_t *persona){

	printf("Apellidos: ");
	fgets(persona->apellidos,TAM_APP,stdin);
	printf("\nNombre: ");
	fgets(persona->nombre,TAM_NOM,stdin);
	printf("\nTelefono: ");
	scanf("%ld",&persona->telefono);
}

void recoger_datos_sin_tel(persona_t *persona){
	printf("Apellidos: ");
	fgets(persona->apellidos,TAM_APP,stdin);
	printf("\nNombre: ");
	fgets(persona->nombre,TAM_NOM,stdin);
}
*/
int presskey(void){

    struct termios oldt, newt;
    int ch;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

	return ch;
}


int comparar_contactos(persona_t contacto1, persona_t contacto2){
/*retorna TRUE si son iguales*/

	if (strcmp(contacto1.nombre,contacto2.nombre) == 0 &&
	 	strcmp(contacto1.apellidos,contacto2.apellidos) == 0 &&
	 	contacto1.telefono == contacto2.telefono)	
	{
		return TRUE;
	}


	return FALSE;


}