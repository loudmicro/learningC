/*
	Juan Victor 
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{

	char num1[5], num2[5], num3[5], num4[5] ;

	printf("Introduce el primer numero\n");
	gets(num1);
	printf("Introduce segundo numero\n");
	gets(num2);
	printf("Introduce tercer numero\n");
	gets(num3);
	printf("Introduce cuarto numero\n");
	gets(num4);
	printf("la suma de los 4 numeros enteros %f\n",atof(num1)+atof(num2)+atof(num3)+atof(num4) );


	return 0;
}
