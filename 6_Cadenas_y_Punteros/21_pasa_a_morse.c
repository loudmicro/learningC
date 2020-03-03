/*
	Juan Victor 
*/

/*
un array para las letras
un array para los numeros
*/
/*
Lo mas largo del codigo morse son 5 puntos

creo que voy a hacer una cadena con todos los caracteres posibles e ir
comparando cada posicion de la cadena con cada posicion de la cadena original, y si coinciden lo imprima

abcdefghijklmnopqrstuvwxyz1234567890

gcc -Wall -o839 839.c

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pasar_a_morse(char cad[]);
void inicializar_morse(char mor[37][5]);

int main(void) {
    char cadena[200];
    printf("Introduce una cadena para pasar a codigo morse:\n\t");
    fgets(cadena,200,stdin);

    pasar_a_morse(cadena);

    return 0;
}

void pasar_a_morse(char cad[]){

    char referencia[] = "abcdefghijklmnopqrstuvwxyz1234567890";
    char morse[37][5];
    char tres_espacios[] = "   ";
    int i=0,n;

    inicializar_morse(morse);


    for ( i = 0; i < strlen(cad); i++) {

        for ( n = 0; n < strlen(referencia); n++) {

            /*
            printf("Cadena[i]========>%c\n",cad[i]);
            printf("Referencia[i]====>%c\n\n",referencia[n] );
            */

            if (cad[i]==referencia[n]) {

                printf("%s ",morse[n] );
            }else if (cad[i] == ' ') {
                printf("%s ",tres_espacios );
            }


        }

    }

    printf("\n");
}

void inicializar_morse(char mor[37][5]){
    /*abcdefghijklmnopqrstuvwxyz1234567890*/

    strcpy(mor[0],".-");//a
    strcpy(mor[1],"-...");//b
    strcpy(mor[2],"-.-.");//c
    strcpy(mor[3],"-..");//d
    strcpy(mor[4],".");//e
    strcpy(mor[5],"..-.");//f
    strcpy(mor[6],"--.");//g
    strcpy(mor[7],"....");//h
    strcpy(mor[8],"..");//i
    strcpy(mor[9],".---");//j
    strcpy(mor[10],"-.-");//k
    strcpy(mor[11],".-..");//l
    strcpy(mor[12],"--");//m
    strcpy(mor[13],"-.");//n
    strcpy(mor[14],"---");//o
    strcpy(mor[15],".--.");//p
    strcpy(mor[16],"--.-");//q
    strcpy(mor[17],".-.");//r
    strcpy(mor[18],"...");//s
    strcpy(mor[19],"-");//t
    strcpy(mor[20],"..-");//u
    strcpy(mor[21],"...-");//v
    strcpy(mor[22],".--");//w
    strcpy(mor[23],"-..-");//x
    strcpy(mor[24],"-.--");//y
    strcpy(mor[25],"--..");//z
    strcpy(mor[26],".----");//1
    strcpy(mor[27],"..---");//2
    strcpy(mor[28],"...--");//3
    strcpy(mor[29],"....-");//4
    strcpy(mor[30],".....");//5
    strcpy(mor[31],"-....");//6
    strcpy(mor[32],"--...");//7
    strcpy(mor[33],"---..");//8
    strcpy(mor[34],"----.");//9
    strcpy(mor[35],"-----");//0
    strcpy(mor[36],"");

}
