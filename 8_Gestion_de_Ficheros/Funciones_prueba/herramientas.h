/*
	Juan Victor 
*/
#define FALSE 0
#define TRUE 1

typedef struct herramienta
{
    unsigned int registro;
	char nombre[50];
	unsigned int cantidad;
	float precio;

}herramienta_t;
 
void print_total(char *file);
int introducir_herramiebta(char *file, herramienta_t nuevo);
int eliminar_herramienta(char *file, herramienta_t nuevo);
int actualizar_herramienta(char *file, herramienta_t nuevo);
