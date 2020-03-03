/*
	Juan Victor 
*/

#include <stdio.h>
#include "mystring.h"


int main(void) {
    mystring_t *mycadena; /*Cadena de prueba*/
    mystring_t *mycadena2;
    mystring_t *mycadena3;
    mystring_t *myaux;
    mystring_t *compara1;
    mystring_t *compara2;

    char basu[300] = "Hola Rafa ";
    char cadena2[300] = "probando concatenacion ";
    char cadena3[300] = "lleva la tarara x un vestido blanco ";
    char cmp1[300] = "esto funcionara?";
    char cmp2[300] = "esto funciona fijo";
    int resul;


    /*
    printf("esta es la cadena en char[] => %s \n",basu);

    mycadena = crear_con_contenido(basu);



    printf("la cadena con myprintf es: ");
    myprintf(mycadena);

    printf("\n el largo de la cadena anterior es %d\n", mystrlen(mycadena));
    */

    /*probando concatenar
    mycadena2 = crear_con_contenido(cadena2);
    mystrcat(&mycadena,mycadena2);

    myprintf(mycadena);
     */

    /*probando n concat
    mystrncat(&mycadena,mycadena2,5);
    printf("\n");

    myprintf(mycadena);
    printf("\n");
    */


    /*vamos a buscar con el mystrchr
    mycadena3 = crear_con_contenido(cadena3);
    myaux = mystrchr(mycadena3,'v');
    myprintf(myaux);
     */

    /*comparamos cadenas*/

    printf("hola\n");
    compara1 = crear_con_contenido(cmp1);
    compara2 = crear_con_contenido(cmp2);
    resul = mystrcmp(compara1,compara2);

    if(resul == 0){
        printf("son iguales\n");
    } else if ( resul < 0){ /*el primero es menor*/
        printf("el primero es menor\n");
    } else if ( resul > 0){
        printf("el primero es mayor\n");
        printf("el primero es mayor\n");
    }










    mydelete(&mycadena);
    mydelete(&mycadena2);
    mydelete(&mycadena3);
    mydelete(&myaux);

    return 0;
}
