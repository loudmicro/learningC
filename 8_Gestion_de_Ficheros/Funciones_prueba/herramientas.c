/*
	Juan Victor 
*/

#include "herramientas.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void print_total(char *file){

    FILE *fd;
    herramienta_t herramienta;
    int i = 1;

    fd = fopen(file,"rb");

    if (fd != NULL)
    {
        
        while (!feof(fd))
        {
            fread(&herramienta,sizeof(herramienta_t),1,fd);
            printf("Registro: %d",herramienta.registro);
            printf("Nombre: %s",herramienta.nombre);
            printf("Cantidad %d",herramienta.registro);
            printf("Precio %.2lf",herramienta.registro);
        }
        fclose(fd);

    }
    


}
int introducir_herramiebta(char *file, herramienta_t nuevo){ /*Retorna true si lo ha metido bien*/
    FILE *fd;
    int ok = FALSE;
    /*abrimos el fichero en escritura*/
    fd = fopen(file,"ab");
    if (fd != NULL)
    {
        if ( fwrite(&nuevo,sizeof(nuevo),1,fd))
        {
            ok = TRUE;
            fclose(fd);
        }
    }
    return ok; 
}

int eliminar_herramienta(char *file, herramienta_t nuevo){

return FALSE;
}
int actualizar_herramienta(char *file, herramienta_t nuevo){
    FILE *fd;
    fd = fopen(file,"rb");
    herramienta_t temp;
    if (fd != NULL)
    {
        while (!feof(fd))
        {
            fread(&temp,sizeof(herramienta_t),1,fd);
            if (temp.registro == nuevo.registro)
            {
                nuevo.cantidad = temp.cantidad;
                nuevo.precio = temp.precio;
                strcpy(nuevo.nombre,temp.nombre);
                fclose(fd);
                return TRUE;
            }
        }
        fclose(fd);
    }
    return FALSE;
}