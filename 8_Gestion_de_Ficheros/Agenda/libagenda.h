
/*
	Juan Victor 
*/
/* Fichero de cabecera para agenda version 1 */
/*
Contiene:
- Definiciones de tipos
- Prototipos de veariables
*/

#define TAM 10
#define FALSE 0
#define TRUE 1
#define TAM_APP 50
#define TAM_NOM 50



/* Definiciones de tipos*/
typedef struct persona
{
	char nombre[50];
	char apellidos[50];
	long int telefono;

}persona_t;

/* Prototipos*/



void printf_agenda(char *file);
int printf_contacto(char *file, int pos);
int insertar_contacto(char *file, persona_t nuevo);

int buscar_contacto(char *file, persona_t contacto);
int eliminar_contacto(char *file, persona_t contacto);
int numero_contactos(char *file);
int es_vacia(char *file);

int print_menu(void);
/*
void recoger_datos(persona_t *persona);
void recoger_datos_sin_tel(persona_t *persona);
*/
int presskey(void);



