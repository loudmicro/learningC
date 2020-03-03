/*
	Juan Victor 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	printf("a- %d\n",  (rand() % 5 + 1)*2); /*al azar los numeros 2 4 6 8 10*/
	printf("b- %d\n",  (rand() % 5 + 2)*2+1); /*al azar los numeros 3 5 7 9 11*/
	printf("c- %d\n",  (rand() % 5 + 1)*4+2); /*al azar los numeros 6 10 14 18 22*/



	return 0;
}
