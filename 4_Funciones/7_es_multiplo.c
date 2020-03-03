/*
	Juan Victor 
*/

#include <stdio.h>

int multiplo (int num1, int num2);

int main(void)
{
	int num1,num2;
	printf("Introduce un numero: \n");
	scanf("%d",&num1);
	printf("Introduce el segundo numero para comprobar si es multiplo: \n");
	scanf("%d",&num2);

	if (multiplo(num1,num2)==1) { /*si la funcion nos devuelve 1 es multiplo*/
		printf("%d es multiplo de %d\n",num2, num1 );
	}else{
		printf("%d no es multiplo de %d\n",num2, num1 );
	}
	return 0;
}
int multiplo (int num1, int num2){
	if (num2 % num1 == 0) {
		return 1; /* 1 si es multiplo*/
	}
	return 0;

}
